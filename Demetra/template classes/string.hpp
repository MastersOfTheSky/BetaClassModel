#ifndef STRING_HPP
#define STRING_HPP

class MyString
{
public:
    MyString();
    MyString(char*);
    MyString(long);
    MyString(const MyString&);
    MyString& operator = (const MyString&);
    ~MyString();

    long MaxCapacity();
    long Capacity();
    bool Empty();
    void Clear();
    bool Compare(const MyString&);
    char FindFirstCharacter();
    char FindLastCharacter();
    void ErasebyPosition(int);
    void EraseByCharacter(const char&);
    void Swap(MyString&);
    void Print();

    void operator += (const MyString&);
    operator const char* () const;
    MyString operator + (const MyString&);

private:
    long max_capacity;
    long capacity;
    char* str;

    void Resize();
    void Copy(const MyString&);
};

#endif // STRING_HPP
