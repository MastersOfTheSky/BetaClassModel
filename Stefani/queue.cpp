#include <iostream>

using namespace std;

template <typename T>
class Queue
{
    public:
        Queue(size_t _size, int _front = 0, int _back = 0) : size(_size), front(_front), back(_back)
    {
        elements = new T[_size];

    }
        ~Queue()
    {
        delete [] elements;
    }
        bool Push( T );
        T Pop();
        bool Is_empty();
        bool Is_full();
        T Front();
        T Back();
        size_t Size();
    private:
        int size;
        T *elements;
        int front;
        int back;
};
template < class T > size_t Queue<T>::Size()
{
    return (size - front + back) % size;
}
template < class T > T Queue<T>::Front()
{
    return elements[front];
}
template < class T > T Queue<T>::Back()
{
    return elements[back-1];
}
template< class T > bool Queue<T>::Is_full()
{
    if((back + 1) %  size == front )
        return 1;
    else
        return 0;
}

template< class T > bool Queue<T>::Push(T x)
{
    bool b = 0;
   if(!Queue<T>::Is_full())
   {
       elements[back] = x;
       back = (back + 1) % size ;
       b = 1;
   }
  return b;
}

template< class T > bool Queue<T>::Is_empty()
{
    if( back  == front )
        return 1;
    else
    return 0;
}

template< class T > T Queue<T>::Pop()
{
    T val = -1;
    if(!Queue<T>::Is_empty())
    {
        val = elements[front];
        front = ( front + 1 ) % size;
    }
    else
    {
        cout << "Queue is Empty : ";
    }
return val;

}

int main()
{
        Queue <float> qu1(32);
        float x = 1.1;

    for( int i=1  ; i < 10 ; i++)
        {
            if(qu1.Push(i*x))
                cout << i*x << endl;
            else
                cout << "\n Queue (qu1) is full: ";
        }
        cout << qu1.Front() << " " << qu1.Back() << " " << qu1.Size() << endl;

    for(int j = 1 ; j < 10 ; j++)
          cout << qu1.Pop() << endl;



    return 0;
}
