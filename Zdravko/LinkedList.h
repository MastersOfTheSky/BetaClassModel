#ifndef LINKED_LIST
#define LINKED_LIST

#include "stdafx.h"
#include <assert.h>

template <typename T>
using Func = T(*)(T);

template <typename T>
class LinkedList
{
public:

	LinkedList();
	LinkedList(const LinkedList<T>& other);
	LinkedList<T>& operator=(const LinkedList<T>& other);
	void operator+=(const LinkedList<T>& other);
	LinkedList<T> operator+(const LinkedList<T>& other);
	~LinkedList();
	const T& Get_front() const;
	const T& Get_back() const;
	void Remove_at_index(size_t ind);
	const T& Get_at_index(size_t ind) const;
	void Push_at_index(size_t ind, T element);
	void Push_front(T element);
	void Push_back(T element);
	void Pop_front();
	void Pop_back(); 
	size_t Get_size() const;
	bool IsEmpty();
	void Reverse();
	void Map(Func<T> function);
	void RemoveAll(T element);

private:

	void ClearEverything();
	void CopyFrom(const LinkedList<T> &other);
	//template <typename M>
	struct Node
	{
		T element;
		Node* nextNode;

		Node(T _element, Node* _nextNode = nullptr) : element(_element), nextNode(_nextNode)
		{
		}
	};

	Node* first;
	Node* last;
	size_t currentLength;
};

#endif // !LINKED_LIST

template<typename T>
inline LinkedList<T>::LinkedList()
	: first(nullptr), last(nullptr), currentLength(0)
{}

template<typename T>
inline LinkedList<T>::LinkedList(const LinkedList<T>& other) : LinkedList()
{
	CopyFrom(other);
}

template<typename T>
inline LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& other)
{
	if (this != &other)
	{
		ClearEverything();
		CopyFrom(other);
	}

	return *this;
}

template<typename T>
inline void LinkedList<T>::operator+=(const LinkedList<T>& other)
{
	for (int ind = 0; ind < other.currentLength; ind++)
	{
		Push_back(other.Get_at_index(ind));
	}
}

template<typename T>
inline LinkedList<T> LinkedList<T>::operator+(const LinkedList<T>& other)
{
	LinkedList<T> result;
	result = *this;
	result += other;

	return result;
}

template<typename T>
inline LinkedList<T>::~LinkedList()
{
	ClearEverything();
}

template<typename T>
inline const T & LinkedList<T>::Get_front() const
{
	return first->element;
}

template<typename T>
inline const T & LinkedList<T>::Get_back() const
{
	return last->element;
}

template<typename T>
inline void LinkedList<T>::Remove_at_index(size_t ind)
{
	assert(ind >= 0 && ind < currentLength);
	if (ind == 0)
	{
		Pop_front();
		return;
	}

	size_t currentInd = 0;
	Node* temp = first;

	while (currentInd < ind - 1)
	{
		temp = temp->nextNode;

		currentInd++;
	}

	Node* nodeToDelete = temp->nextNode;
	temp->nextNode = nodeToDelete->nextNode;

	delete[] nodeToDelete;
	if (ind == currentLength - 1)
	{
		last = temp;
	}
	--currentLength;
}

template<typename T>
inline const T & LinkedList<T>::Get_at_index(size_t ind) const
{
	size_t curr = 0;
	Node* tmp = first;

	while (curr < ind)
	{
		tmp = tmp->nextNode;

		curr++;
	}

	return tmp->element;
}

template<typename T>
inline void LinkedList<T>::Push_at_index(size_t ind, T element)
{
	assert(ind >= 0 && ind < currentLength);

	if (ind == 0)
	{
		Push_front(element);
		return;
	}

	if (ind == currentLength)
	{
		Push_back(element);
		return;
	}

	Node* tmp = first;
	size_t currentPos = 0;

	while (currentPos < ind - 1)
	{
		tmp = tmp->nextNode;

		currentPos++;
	}

	Node* nodeToAdd = new Node<T>(element, tmp->nextNode);
	tmp->nextNode = nodeToAdd;

	++currentLength;
}

template<typename T>
inline void LinkedList<T>::Push_front(T element)
{
	Node* nodeToAdd = new Node(element, first);
	first = nodeToAdd;

	if (currentLength == 0)
	{
		last = first;
	}

	currentLength++;
}

template<typename T>
inline void LinkedList<T>::Push_back(T element)
{
	if (currentLength == 0)
	{
		Push_front(element);
		last = first;

		return;
	}

	Node* nodeToAdd = new Node(element, nullptr);
	last->nextNode = nodeToAdd;
	last = last->nextNode;

	currentLength++;
}

template<typename T>
inline void LinkedList<T>::Pop_front()
{
	Node* nodeToDel = first;
	first = first->nextNode;

	delete[] nodeToDel;
	currentLength--;
}

template<typename T>
inline void LinkedList<T>::Pop_back()
{
	Remove_at_index(currentLength - 1);
}

template<typename T>
inline size_t LinkedList<T>::Get_size() const
{
	return currentLength;
}

template<typename T>
inline bool LinkedList<T>::IsEmpty()
{
	return first == nullptr;
}

template<typename T>
inline void LinkedList<T>::Reverse()
{
	size_t max = currentLength;
	LinkedList<T> result;

	for (size_t ind = 0; ind < max; ind++)
	{
		result.Push_front(Get_at_index(ind));
	}

	this->operator=(result);
}

template<typename T>
inline void LinkedList<T>::Map(Func<T> function)
{
	Node* iterator = first;

	while (iterator != nullptr)
	{
		iterator->element = function(iterator->element);
		iterator = iterator->nextNode;
	}
}

template<typename T>
inline void LinkedList<T>::RemoveAll(T elementToDel)
{
	Node* iterator = first;
	size_t currentInd = 0;

	while (iterator != nullptr)
	{
		if (iterator->element == elementToDel)
		{
			iterator = iterator->nextNode;
			Remove_at_index(currentInd);
		}
		else
		{
			currentInd++;
			iterator = iterator->nextNode;
		}
		}
}

template<typename T>
inline void LinkedList<T>::ClearEverything()
{
	while (!IsEmpty())
	{
		Pop_front();
	}
}

template<typename T>
inline void LinkedList<T>::CopyFrom(const LinkedList<T>& other)
{
	Node* currNode = other.first;
	while (currNode != nullptr)
	{
		Push_back(currNode->element);

		currNode = currNode->nextNode;
	}
}
