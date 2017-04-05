#include <iostream>
#include <string.h>
#include "string.hpp"

using namespace std;

MyString:: MyString(): max_capacity(32), capacity(0)
{
    str = new char[0];
}

MyString:: MyString(char* _str)
{
    max_capacity = 32;
    capacity = strlen(_str);
    if(max_capacity < capacity)
        Resize();
    str = new char[capacity];
    strcpy(str, _str);
}

MyString:: MyString(long _capacity)
{
    if(_capacity > max_capacity)
        Resize();

    capacity = _capacity;
    str = new char[capacity];
    strcpy(str, "");
}

void MyString::Copy(const MyString& other)
{
    if(this != &other)
    {
        capacity = other.capacity;
        if(max_capacity < other.max_capacity)
            max_capacity = other.max_capacity;

        str = new char [capacity];
        for(int i = 0; i < capacity; i ++)
            str[i] = other.str[i];
    }
}

MyString:: MyString(const MyString& other): MyString()
{
    Copy(other);
}

MyString& MyString:: operator = (const MyString& other)
{
    delete str;
    Copy(other);
    return *this;
}

MyString::~MyString()
{
    delete[] str;
}

long MyString::Capacity()
{
    return capacity;
}

long MyString::MaxCapacity()
{
    return max_capacity;
}

bool MyString::Empty()
{
    return (capacity==0);
}

void MyString::Clear()
{
    capacity = 0;
    strcpy(str,"");
}

void MyString::Resize()
{
    max_capacity *= 2;
}

char MyString::FindFirstCharacter()
{
    return str[0];
}

char MyString::FindLastCharacter()
{
    return str[capacity-1];
}

void MyString::ErasebyPosition(int position)
{
    char* result = new char[capacity-1];
    int i;
    for(i = 0; i < position; i ++)
        result[i] = str[i];
    for(int i = position + 1; i < capacity; i++)
    {
       result[i-1] = str[i];
    }
    delete str;
    str = result;
    capacity--;
}

void MyString::EraseByCharacter(const char& symbol)
{
    int position=0;
    while(str[position]!= symbol && position < capacity)
        position++;
    ErasebyPosition(position);
}

bool MyString::Compare(const MyString& other)
{
    return (capacity == other.capacity);
}

void MyString::Swap(MyString& other)
{
    MyString tmp;
    tmp.capacity = capacity;
    tmp.max_capacity = max_capacity;
    strcpy(tmp.str, str);

    capacity = other.capacity;
    max_capacity = other.max_capacity;
    strcpy(str,other.str);

    other.capacity = tmp.capacity;
    other.max_capacity = tmp.max_capacity;
    strcpy(other.str, tmp.str);
}

void MyString::Print()
{
    for(int i=0; i < capacity; i++)
        cout<<str[i];
    cout<<endl;
}

void MyString::operator+=(const MyString& other)
{
    if(max_capacity < capacity + other.capacity)
        Resize();

    char* result = new char[capacity + other.capacity];
    int i;
    for(i = 0; i < capacity; i++)
        str[i] = other.str[i];
    for(i = capacity; i < other.capacity + capacity; i++)
        str[i] = other.str[i - capacity];

    delete str;
    str = result;
    capacity += other.capacity;
}

MyString::operator const char* () const
{
    return str;
}

MyString MyString::operator+(const MyString& other)
{
    char* result= new char[capacity + other.capacity];
    strcat(result, str);
    strcat(result, other.str);

    MyString results(result);
    return results;
}
