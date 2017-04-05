#include <iostream>

using namespace std;

template <class T>
struct Node
{
    T val;
    Node<T> *next;
};

template <class T>
class LinkedList
{
public:
    LinkedList()
    {
        first=nullptr;
        last=nullptr;

    }

    ~LinkedList();
    void Insert_at_back(T valueToInsert);
    bool Remove_from_back();
    void Print();
    bool Is_empty();
    void Clear();
    void Insert_at_front(T valueToInsert);
    bool Remove_from_front();

    T& Get_first_elem();
    T& Get_last_elem();

private:
    Node<T> *first;
    Node<T> *last;
};

template <class T>

LinkedList<T>::~LinkedList()
{
    Node<T>* temp = first;
    while(temp != 0)
    {
        temp = temp->next;
        delete(first);
        first = temp;
    }
}

template <class T>void LinkedList<T>::Insert_at_back(T valueToInsert)
{
    Node<T>* newNode=new Node<T>;

    newNode->val = valueToInsert;
    newNode->next = 0;

    Node<T>* temp = first;

    if (temp != 0)
    {
        while (temp->next != 0)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
    else
    {
        first = newNode;
    }
}

template <class T>
bool LinkedList<T>::Remove_from_back()
{
    if (first == nullptr)
    {
        return false;
    }

    if (first == last)
    {
        cout<<"First is equal to Last."<<endl;
        delete(first);
        first = last = nullptr;
        return true;
    }

    else
    {
        Node<T>* temp = first;
        int nodeCount = 0;

        while (temp != 0)
        {
            nodeCount = nodeCount + 1;
            temp = temp->next;
        }

        Node<T>* temp2 = first;

        for(int i = 1; i < (nodeCount - 1); i++)
        {
            temp2 = temp2->next;
        }


        delete(temp2->next);

        last = temp2;
        last->next = 0;

        return true;
    }
}


template <class T>
void LinkedList<T>::Print()
{
    Node<T>* temp = first;

    if (temp == 0)
    {
        cout<<"";
    }

    if (temp->next == 0)
    {
        cout<<temp->val;
    }
    else
    {
        while (temp != 0)
        {
            cout<< temp->val;
            temp = temp->next;
            cout<< " ";
        }
    }
}

template <class T>
bool LinkedList<T>::Is_empty()
{
    if (first == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}



template <class T>
void LinkedList<T>::Clear()
{
    Node<T>* temp = first;
    while(temp != 0)
    {
        temp = temp->next;
        first = temp;
        delete(temp);
    }
}

template <class T>
void LinkedList<T>::Insert_at_front(T valueToInsert)
{
    Node<T>* newNode=new Node<T>;

    newNode->val = valueToInsert;

    if(first == nullptr)
    {
        first = newNode;
    }
    else
    {
        newNode->next = first;
        first = newNode;
    }

}

template <class T>
bool LinkedList<T>::Remove_from_front()
{
    if (first == nullptr)
    {
        return false;
    }

    else
    {
        Node<T>* temp;

        temp = first;
        first = first->next;

        delete(temp);

        return true;
    }
}
template <class T>
T& LinkedList<T>::Get_first_elem()
{
    return first->val;
}

template<class T>
T& LinkedList<T>::Get_last_elem()
{
    Node<T>* temp;
    temp=first;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    return temp->val;
}


int main()
{

    LinkedList<char> ll1;
    ll1.Insert_at_back('b');
    ll1.Insert_at_back('c');

    ll1.Insert_at_front('a');
    ll1.Remove_from_front();
    ll1.Print();
    cout<<endl;
    char c=ll1.Get_last_elem();
    cout<<c;
    cout<<endl;

    ll1.Clear();

    bool res=ll1.Is_empty();
    if(res==true)
    {
        cout<<"empty";
    }
    else cout<<"its full";
    return 0;

}
