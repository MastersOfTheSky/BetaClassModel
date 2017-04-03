#ifndef Vector_hpp
#define Vector_hpp

using namespace std;

template <typename T>
class Vector
{
public:

    Vector(size_t max_size = 16, size_t size = 0) : _max_size(max_size), _size(size)
    {
        elements = new T[max_size];
    }

    Vector(const Vector<T>& other)
    {
        Copy(other);
    }

    Vector<T>& operator=(Vector<T>& other)
    {
        if(this!= other)
            delete[] this;
            Copy(other);
        return *this;
    }

    T& operator[](size_t ind) const
    {
        return elements[ind];
    }

    size_t get_size()
    {
        return _size;
    }

    size_t get_max_size()
    {
        return _max_size;
    }

    void Push_back(T new_element)
    {
        if (_size == _max_size)
            Resize(_max_size);
        elements[_size] = new_element;
        _size++;
    }

    T Pop_back()
    {
        _size--;
        return elements[_size];
    }

    int Shrink_to_fit()
    {
        _max_size = _size;
        return _max_size;
    }

    void Delete_element(int position)
    {
        for (int i = position; i <= _size; i++)
            elements[i] = elements[i + 1];
        _size--;
    }

    ~Vector()
    {
        delete[] elements;
    }

private:
    T* elements;

    size_t _size;
    size_t _max_size;

    void Copy(const Vector<T>& other)
    {
        _size = other._size;
        _max_size = other._max_size;
        elements = new T[_max_size];
        for (int i = 0; i < _size; i++)
            elements[i] = other.elements[i];
    }

    void Resize(int _max_size)
    {
       _max_size++;
    }

};

template<typename T>
ostream& operator<<(ostream& os, Vector<T>& other)
{
    for (int i = 0; i < other.get_size(); i++)
        os << other[i] << " ";
        os << endl;
    return os;
}


#endif // Vector_hpp
