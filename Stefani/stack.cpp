#include <iostream>

using namespace std;

template <typename T>
class Stack
{
public:
    Stack(size_t _size, int _index = -1) : size(_size), index(_index)
    {
        elements = new T[_size];

    }
    bool Push( T );
    T Pop();
    bool Is_empty();
    bool Is_full();
    size_t Size();

    ~Stack()
    {
        delete[] elements;
    }
private:

    size_t size;
    T *elements;
    int index;
};
template < class T > size_t Stack<T>::Size()
{
    return size;
}
template< class T > bool Stack<T>::Is_full()
{
    if((index + 1) == size )
        return 1;
    else
        return 0;
}
template< class T > bool Stack<T>::Is_empty()
{
    if( index  == -1 )
        return 1;
    else
        return 0;
}
template< class T > bool Stack<T>::Push(T x)
{
    bool flag = 0;
    if(!Stack<T>::Is_full())
    {
        index += 1;
        elements[index] = x;
        flag = 1;
    }
    return flag;
}
template< class T > T Stack<T>::Pop()
{
    T val = -1;
    if(!Stack<T>::Is_empty())
    {
        val = elements[index];
        index -=  1;
    }
    else
    {
        cout << "Stack is Empty : ";
    }
    return val;

}
int main()
{

    Stack <int> stack1(5);
    int y = 1;

    int i, j;

    for( i = 1  ; i <= 6 ; i++)
    {
        if(stack1.Push(i*y))
            cout << endl << i*y;
        else
            cout << "\n Stack1 is full: ";
    }

    for( j = 1 ; j <= 6 ; j++)
        cout << stack1.Pop() << endl;

    cout << stack1.Size();

    return 0;
}

