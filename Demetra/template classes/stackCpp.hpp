#include <iostream>
#include "stack.hpp"

using namespace std;

template<typename T>
MyStack<T>::MyStack(): size(0), top(-1) {}

template<typename T>
MyStack<T>::MyStack(int _size): size(_size), top(-1)
{
    if(size!=0)
        ptr = new T[size];
    else
        ptr = nullptr;
    top=-1;
}

template <typename T>
MyStack<T>::MyStack(const MyStack<T>& other): MyStack()
{
    if(this!=&other)
        Copy();
}
template <typename T>
MyStack<T> MyStack<T>::operator=(const MyStack<T>& other)
{
    if(this != &other);
    {
        Clear();
        Copy();

    }
    return *this;
}

template <typename T>
MyStack<T>::~MyStack()
{
    Clear();
}

template <typename T>
void MyStack<T>::Clear()
{
    delete[] ptr;
    size=0;
    top=-1;
    ptr=nullptr;
}

template <typename T>
void MyStack<T>::Copy(const MyStack<T>& other)
{
    size = other.size;
    top = other.top;
    T* result = new T[size];
    for(int i=0; i<size; i++)
        result[i] = other.ptr[i];
    delete []ptr;
    ptr = result;
}

template <typename T>
bool MyStack<T>::Empty()
{
    return top==-1;
}

template <typename T>
bool MyStack<T>::Full()
{
    return top==size-1;
}

template<typename T>
long MyStack<T>::Size()
{
    return size;
}

template<typename T>
long MyStack<T>::Len()
{
    return top+1;
}

template<typename T>
void MyStack<T>::Push(T element)
{
    if(!Full())
    {
        top++;
        ptr[top] = element;
    }
}

template<typename T>
T& MyStack<T>::Pop()
{
    if(!Empty())
    {
        T element = ptr[top];
        top--;
        return element;
    }
}

template<typename T>
T& MyStack<T>::Top()
{
    return ptr[top];
}

template<typename T>
void MyStack<T>::Swap(MyStack<T>& other)
{
    long tmpSize = size;
    T* tmpPtr = new T[size];
    for(int i=0; i<size; i++)
        tmpPtr[i] = ptr[i];
    long tmpTop = top;

    size = other.size;
    for(int i=0; i<size; i++)
        ptr[i] = other.ptr[i];
    top = other.top;

    other.size = tmpSize;
    for(int i=0; i<size; i++)
        other.ptr[i] = tmpPtr[i];
    other.top = tmpTop;
}

template<typename T>
void MyStack<T>::Print()
{
    for(int i=0; i<=top; i++)
        cout << ptr[i] << " ";
      cout<<endl;
}
