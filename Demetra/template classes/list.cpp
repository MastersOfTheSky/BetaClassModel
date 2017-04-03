#include <iostream>
#include <string.h>
#include "list.hpp"

using namespace std;
template <typename T>

MyLinkedList:: MyLinkedList(): max_size(32), size(0), first(nullptr) {}

MyLinkedList:: MyLinkedList(const MyLinkedList& other)
{
    if(this != &other)
        Copy(other);
}

MyLinkedList MyLinkedList:: operator = (const MyLinkedList& other)
{
    if(this != &other)
    {
        Clear();
        Copy(other);
    }
    return *this;
}

MyLinkedList:: ~MyLinkedList()
{
    Clear();
}

bool MyLinkedList::Empty()
{
    return (size==0 && first==nullptr);
}

long MyLinkedList::Size()
{
    return size;
}

long MyLinkedList::MaxSize()
{
    return max_size;
}

T MyLinkedList::Front()
{
    return first->data;
}

T MyLinkedList::Back()
{
    box* helper = first;

    for(int i=0; i< size; i++)
        helper = helper->next;

    return helper->data;
}

void MyLinkedList::Resize()
{
    max_size *= 2;
}

void MyLinkedList::Pop_front()
{
    box* helper = first;
    first = first->next;
    delete helper;
    size--;
}

void MyLinkedList::Pop_back()
{

}
