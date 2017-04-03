#ifndef String_hpp
#define String_hpp
using namespace std;

class String
{
public:

    String();

    String(const char* elem, int size) : _elem(elem), _size(size)
    {
        _size = 32;
    }

    String(const String& other)
    {
        Copy(other);
    }

    String& operator=(const String& other)
    {
        delete[] this;
        Copy(other);
        return *this;
    }

    int get_size()
    {
        return _size;
    }

    void Copy(const String& other)
    {
        _size = other._size;
        delete[] _elem;
        for (int i = 0; i < _size; i++)
            _elem[i] = other._elem[i];
    }

    void Print()
    {
        for (int i = 0; i < _size; i++)
            cout << _elem[i];
    }

    String& operator+(const String& other)
    {
        for (int i = _size + 1; i <= _size + other._size; i++)
        {
            _elem[i] = other._elem[i - _size];
        }
        _size += other._size;
    }

    int Get_length(const String&)
    {
        int counter = 0;
        for (int i = 0; i < _size; i++)
        {
            if (_elem[i] != '\0')
                counter++;
        }
        return counter;
    }

    int Increase_size(const String& other)
    {
        _size++;
        return _size;
    }

    const char* operator[](int pos)
    {
        return _elem[pos];
    }

    ~String()
    {
        delete[] _elem;
    }

private:
    char* _elem;
    int _size;
};

#endif // String_hpp
