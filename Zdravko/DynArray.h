#ifndef DYN_ARRAY
#define DYN_ARRAY

#include <assert.h>

template <typename T>
class DynArray
{
public:

	DynArray();
	DynArray(size_t);
	DynArray(const DynArray<T>&);
	DynArray<T>& operator= (const DynArray<T>&);
	T& operator[](size_t);
	~DynArray();
	void AddElement(const T&);
	void RemoveElement(size_t);
	void RemoveElement(const T&);
	void Resize(size_t);
	DynArray<DynArray<T>> Slice(size_t);
	size_t GetLength();
	size_t GetMaxLength();
	
private:

	T *elements;
	const short unsigned int minCapacity = 64;
	size_t maxLength;			
	size_t currentLength;
};

template <typename T>
DynArray<T>::DynArray()
{
	elements = new(nothrow) T[minCapacity];

	currentLength = 0;
	maxLength = minCapacity;
}

template<typename T>
size_t DynArray<T>::GetLength()
{
	return currentLength;
}

template<typename T>
size_t DynArray<T>::GetMaxLength()
{
	return maxLength;
}

template<typename T>
DynArray<T>::DynArray(size_t size = 64)
{
	if (size < 1)
	{
		size = 1;
	}

	elements = new(nothrow) T[size * 2];
	if (elements == nullptr)
	{
		elements = new T[size];
	}

	currentLength = 0;
	maxLength = size;
}

template<typename T>
DynArray<T>::~DynArray()
{
	delete[] elements;
}

template<typename T>
DynArray<T>::DynArray(const DynArray<T>& obj)
{
	elements = new T[obj.maxLength];
	maxLength = obj.maxLength;
	currentLength = obj.currentLength;

	for (int ind = 0; ind < currentLength; ind++)
	{
		elements[ind] = obj.elements[ind];
	}
}

template<typename T>
DynArray<T>& DynArray<T>::operator=(const DynArray<T>& obj)
{
	if (this != &obj)
	{
		delete[] elements;
		elements = new T[obj.maxLength];
		maxLength = obj.maxLength;
		currentLength = obj.currentLength;

		for (int ind = 0; ind < currentLength; ind++)
		{
			elements[ind] = obj.elements[ind];
		}
	}

	return *this;
}

template<typename T>
T & DynArray<T>::operator[](size_t index)
{
	assert(index >= 0 && index < currentLength);

	return elements[index];
}


template <typename T>
void DynArray<T>::AddElement(const T& element)
{
	if (currentLength == maxLength)
	{
		T* newElements = new T[maxLength * 2];
		for (int ind = 0; ind < currentLength; ind++)
		{
			newElements[ind] = elements[ind];
		}

		delete[] elements;
		elements = newElements;
		maxLength *= 2;
	}
	elements[currentLength] = element;
	currentLength++;
}

template<typename T>
void DynArray<T>::RemoveElement(size_t index)
{
	for (int ind = index + 1; ind < currentLength; ind++)
	{
		elements[ind - 1] = elements[ind];
	}

	currentLength--;
	elements[currentLength] = T();
}

template<typename T>
void DynArray<T>::RemoveElement(const T &elementToDelete)
{
	size_t index = 0;
	while (index < currentLength && elements[index] != elementToDelete)
	{
		index++;
	}

	RemoveElement(index);
}

template<typename T>
void DynArray<T>::Resize(size_t newSize)
{
	T *result = new T[newSize];
	size_t startingIndex = 0;
	if (newSize < currentLength)
	{
		startingIndex = currentLength - newSize;
	}

	for (int ind = startingIndex; ind < currentLength; ind++)
	{
		result[ind - startingIndex] = elements[ind];
	}

	delete[] elements;
	elements = result;
	maxLength = newSize;
	currentLength = currentLength - startingIndex;
}

template<typename T>
inline DynArray<DynArray<T>> DynArray<T>::Slice(size_t amount)
{
	int pieces = this->GetLength() / amount;
	int remainder = this->GetLength() % amount;
	if (remainder != 0)
	{
		pieces++;
	}

	DynArray<DynArray<T>> result(pieces);
	size_t currentIndex = 0;
	for (int ind = 0; ind < pieces - 1; ind++)
	{
		DynArray<T> current(amount);
		for (int innerInd = 0; innerInd < amount; innerInd++)
		{
			current.AddElement(elements[currentIndex]);
			currentIndex++;
		}

		result.AddElement(current);
	}

	DynArray<T> current(remainder);
	for (int ind = 0; ind < remainder; ind++)
	{
		current.AddElement(elements[currentIndex]);
		currentIndex++;
	}
	result.AddElement(current);

	return result;
}

#endif // !DYNARRAY
