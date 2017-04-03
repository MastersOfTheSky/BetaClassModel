#include <iostream>

using namespace std;

//Max size 256
template<class T>
class Stack
{
public:
	Stack();
	void Push(T x);
	void Pop();
	T Top() const;
	int Size() const;
	bool Empty();
	void Print() const;
private:
	T _arr[256];
	int _top;
};
template<class T>
Stack<T>::Stack()
{
	_arr[256]={0};
	_top = -1;
}

template<class T>
void Stack<T>::Push(T x)
{
	if (_top >= 256)
	{
		cout << "No enough space!" << endl;
		return;
	}
	_arr[_top + 1] = x;
	_top = _top + 1;
}

template<class T>
void Stack<T>::Pop()
{
	if (_top < 0)
	{
		cout << "The stack is empty! " << endl;
		return;
	}
	_top = _top - 1;
}

template<class T>
T Stack<T>::Top()const
{
	return _arr[_top];
}

template<class T>
int Stack<T>::Size()const
{
	return _top+1;
}

template<class T>
bool Stack<T>::Empty()
{
	return(_top< 0 ? 1 : 0);
}

template<class T>
void Stack<T>::Print()const
{
	for (int i = _top; i >= 0; --i)
		cout << _arr[i] << endl;
}



int main()
{
	Stack<int> stack;
	//stack.Push(12);
	//stack.Push(15);
	//stack.Print();
	//stack.Pop();
	//stack.Print();
	stack.Push(10);
	stack.Push(18);
	stack.Push(17);
	stack.Push(15);
	stack.Push(12);
	stack.Pop();
	stack.Print();
	cout << "Top: " << stack.Top() << endl;
	cout << "Size: " << stack.Size() << endl;

	return 0;
}