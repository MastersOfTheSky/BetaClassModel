#ifndef LIST_HPP
#define LIST_HPP

template <typename T>
class MyLinkedList
{
public:
    MyLinkedList();
    MyLinkedList(const MyLinkedList&);
    MyLinkedList operator =(const MyLinkedList&);
    ~MyLinkedList();

    bool Empty();
    long Size();
    long MaxSize();
    T Front();
    T Back();
    void Resize();
    void Pop_front();
    void Pop_back();
    void Push_front(T);
    void Push_back(T);
    void Insert(T,int);
    void Remove(int);
    void Print();

    T& operator[](int);

 //   friend MyLinkedList Merge(const MyLinkedList& l1, const MyLinkedList& l2);

private:
    struct box
    {
        T data;
        box* next;

        box(T _data, box* _first = nullptr): data(_data), next(_first) {}
    };

    box* first;
    long size;
    long max_size;

    void Clear();
    void Copy(const MyLinkedList&);
};

#include "listCpp.hpp"
#endif // LIST_HPP
