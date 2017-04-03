#include <iostream>

using namespace std;

const int maxSize = 256;
template <class T>
class Queue
{
public:
	Queue();
	void Push(T);
	void Pop();
	T Front()const;
	T Back()const;
	int Size()const;
	bool IsEmpty()const;
	void Print()const;
private:
	T _arr[maxSize];
	int _size;
};

template<class T>
Queue<T>::Queue()
{
	_arr[maxSize] = { 0 };
	_size = -1;
}

template<class T>
void Queue<T>::Push(T x)
{
	if (_size >= maxSize)
	{
		cout << "No enough space!" << endl;
		return;
	}
	_arr[_size + 1] = x;
	_size += 1;
}

template<class T>
void Queue<T>::Pop()
{
	if (_size < 0)
	{
		cout << "The queue is empty!" << endl;
		return;
	}
	_arr[0] = 0;
	for (int i = 1; i <= _size; ++i)
	{
		_arr[i - 1] = _arr[i];
		_arr[i] = 0;
	}
	_size = _size - 1;
}

template<class T>
T Queue<T>::Front()const
{
	return _arr[0];
}

template<class T>
T Queue<T>::Back()const
{
	return _arr[_size];
}

template<class T>
int Queue<T>::Size()const
{
	return _size + 1;
}

template<class T>
bool Queue<T>::IsEmpty()const
{
	return (_size < 0 ? yes : no);
}

template<class T>
void Queue<T>::Print()const
{
	for (int i = 0; i <= _size; ++i)
		cout << _arr[i] << " ";
	cout << endl;
}


int main()
{
	Queue<int> q;
	q.Push(10);
	q.Push(20);
	q.Push(30);
	q.Print();
	cout << "Size: " << q.Size() << endl;
	q.Pop();
	q.Print();
	cout << "New size: " << q.Size() << endl;
	q.Pop();
	q.Pop();
	q.Pop();
	q.Push(10);
	q.Push(20);
	q.Push(30);
	q.Push(40);
	q.Push(50);
	q.Push(60);
	q.Push(70);
	q.Push(80);
	q.Print();
	cout << "Front: " << q.Front() << endl;
	cout << "Back: " << q.Back() << endl;
	cout << "Size: " << q.Size() << endl;


	return 0;
}