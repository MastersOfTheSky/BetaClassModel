#ifndef Set_hpp
#define Set_hpp

using namespace std;

template <typename T>
class Set
{
public:

    Set(size_t size) : _size(size)
    {
        elements = new T[size];

    }

    int get_size()
    {
        return _size;
    }

    void Insert(T new_elem)
    {
        int x = 0;
        for (int i = 0; i < _size; i++)
        {
            if (elements[i] != '\0')
                x++;
        }
        elements[x] = new_elem;

        for(int i = 0; i < _size; i++)
        {
            if (elements[i] == new_elem)
                Pop_back();
        }
    }

    T Pop_back()
    {
        _size--;
        return elements[_size];
    }

    T& operator[](size_t i)
    {
        return elements[i];
    }

    T& operator=(const Set<T>& other)
    {
        if (this != other)
            delete[] this;
            Copy(other);
        return *this;
    }

    T Find(T value)
    {
        for(int i = 0; i < _size; i++)
        {
            if (value == elements[i])
                return i;
        }
    }

    void Erase(const Set<T>, int it)
    {
        for (int i = it; i <= _size; i++)
            elements[i] = elements[i + 1];
        _size--;
    }

    ~Set()
    {
        delete[] elements;
    }

private:
    T* elements;
    size_t _size;
    int current_index;

    void increase_size()
    {
        _size += 1;
    }

    void Copy(const Set<T>& other)
    {
        _size = other._size;
        elements = new T[_size];
        for(int i = 0; i < other.get_size(); i++)
            elements[i] = other.elements[i];
    }
};

template <typename T>
ostream& operator<<(ostream& os, Set<T>& other)
    {
        for (int i = 0; i < other.get_size(); i++)
        {
            os << other[i] << endl;
        }
        return os;
    }

    #endif
