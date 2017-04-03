#ifndef STACK_HPP
#define STACK_HPP

template <typename T>
class MyStack
{
public:
    MyStack();
    MyStack(int);
    MyStack (const MyStack&);
    MyStack operator=(const MyStack&);
    ~MyStack();

    bool Empty();
    bool Full();
    long Size();
    long Len();
    void Push(T);
    T& Pop();
    T& Top();
    void Swap(MyStack&);
    void Print();

private:
    T* ptr;
    int top;
    long size;

    void Clear();
    void Copy(const MyStack&);
};

#include "stackCpp.hpp"
#endif // STACK_HPP
