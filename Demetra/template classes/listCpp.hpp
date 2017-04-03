#include <iostream>
#include <string.h>
#include "list.hpp"

using namespace std;
template <typename T>
MyLinkedList<T>::MyLinkedList(): max_size(32), size(0), first(nullptr) {}
template <typename T>
MyLinkedList<T>::MyLinkedList(const MyLinkedList<T>& other)
{
    if(this != &other)
        Copy(other);
}
template <typename T>
MyLinkedList<T> MyLinkedList<T>::operator = (const MyLinkedList<T>& other)
{
    if(this != &other)
    {
        Clear();
        Copy(other);
    }
    return *this;
}
template <typename T>
MyLinkedList<T>::~MyLinkedList()
{
    Clear();
}
template <typename T>
bool MyLinkedList<T>::Empty()
{
    return (size==0 && first==nullptr);
}
template <typename T>
long MyLinkedList<T>::Size()
{
    return size;
}
template <typename T>
long MyLinkedList<T>::MaxSize()
{
    return max_size;
}
template <typename T>
T MyLinkedList<T>::Front()
{
    return first->data;
}
template <typename T>
T MyLinkedList<T>::Back()
{
    box* helper = first;
    for(int i=0; i < size-1; i++)
        helper = helper->next;

    return helper->data;
}
template <typename T>
void MyLinkedList<T>::Resize()
{
    max_size *= 2;
}
template <typename T>
void MyLinkedList<T>::Pop_front()
{
    box* helper = first;
    first = first->next;
    delete helper;
    size--;
}
template <typename T>
void MyLinkedList<T>::Pop_back()
{
    box* helper = first;
    for(int i=0; i<size-1; i++)
        helper = helper->next;
    delete helper->next;
    helper->next = nullptr;
    size--;
}
template <typename T>
void MyLinkedList<T>::Push_front(T element)
{
    box* newbox = new box(element);
    first = newbox;
    ++size;
}
template <typename T>
void MyLinkedList<T>::Push_back(T element)
{
    Insert(element,Size());
}
template <typename T>
void MyLinkedList<T>::Insert(T element, int position)
{
    if(Empty() || position==0)
        Push_front(element);
    else
    {
        box* helper = first;
        while(position > 1)
        {
            --position;
            helper = helper->next;
        }
        helper->next = new box(element,helper->next);
        ++size;
    }
}
template <typename T>
void MyLinkedList<T>::Clear()
{
    while(!Empty())
        Pop_front();
}
template <typename T>
void MyLinkedList<T>::Copy(const MyLinkedList<T>& other)
{
    box* tmp = other.first;
    while(first!=nullptr)
    {
        tmp=tmp->next;
        Push_back(tmp->data);
    }
}
template <typename T>
void MyLinkedList<T>::Remove(int position)
{
    box* tmp = first;
    if(position==0)
        Pop_front();
    else
    {
        while(position>1)
        {
            position--;
            tmp=tmp->next;
        }
        box* remover = tmp->next;
        tmp->next = remover->next;
        delete remover;
        size--;
    }
}
template <typename T>
void MyLinkedList<T>::Print()
{
    box* tmp = first;
    while(tmp)
    {
        tmp=tmp->next;
        cout<<tmp->data<<" ";
    }
    cout<<endl;
}
template <typename T>
T& MyLinkedList<T>::operator[](int position)
{
    box* helper = first;

    for(int i=0; i < position; i++)
        helper = helper->next;

    return helper->data;
}
