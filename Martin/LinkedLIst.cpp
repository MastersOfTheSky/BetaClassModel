#include <iostream>
using namespace std;

template<class T>
class LinkedList
{
public:
	LinkedList();
	void InsertAt(T, int);
	void RemoveFrom(int);
	void Push_Back(T);
	void Push_Front(T);
	void Pop_Back();
	void Pop_Front();
	bool Empty()const;
	int Size()const;
	T Front()const;
	T Back()const;
	void Print()const;
private:
	struct node
	{
		T _data;
		node* _next;
		node* _prev;
		node(T data, node* next) :
			_data(data), _next(next) {}
	};
	int _size;
	node* first;
	node* last;
};

template<class T>
LinkedList<T>::LinkedList()
{
	_size = 0;
	first = nullptr;
}

template<class T>
void LinkedList<T>::Push_Front(T x)
{
	node* curr = new node(x, first);
	first = curr;
	_size++;
}

template<class T>
void LinkedList<T>::Push_Back(T x)
{
	InsertAt(x, _size);
}

template<class T>
bool LinkedList<T>::Empty()const
{
	return(first == nullptr);
}

template<class T>
int LinkedList<T>::Size()const
{
	return _size;
}

template<class T>
T LinkedList<T>::Front()const
{
	return first->_data;
}

template<class T>
T LinkedList<T>::Back()const
{
	return last->_data;
}

template<class T>
void LinkedList<T>::InsertAt(T x, int pos)
{
	if (Empty() || pos == 0)
	{
		node* curr = new node(x, first);
		first = curr;
		_size++;
	}
	node* tmp = first;
	while (pos > 1)
	{
		--pos;
		tmp = tmp->next;
	}
	tmp->next = new node(x, tmp->next);
	++_size;
}

template<class T>
void LinkedList<T>::Pop_Front()
{
	node* tmp = first;
	first = first->next;
	delete tmp;
	--_size;
}

template<class T>
void LinkedList<T>::Pop_Back()
{
	node* tmp = last;
	last = last->prev;
	delete tmp;
	--_size;
}

template<class T>
void LinkedList<T>::RemoveFrom(int pos)
{
	if (pos == 0)
	{
		Pop_Front();
		return;
	}
	node* tmp = first;
	while (pos > 1)
	{
		--pos;
		tmp = tmp->next;
	}
	node* remove = tmp->next;
	tmp->next = remove->next;
	delete remove;
	--_size;
}

template<class T>
void LinkedList<T>::Print()const
{
	node* curr = first;
	while (firts != nullptr)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
}