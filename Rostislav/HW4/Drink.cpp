#include <iostream>
#include <cstring>

using namespace std;

class Drink
{
public:

    Drink(const char* _name, float _liters, float _price)
    {
        name = new char[31];
        strcpy(name, _name);
        liters = _liters;
        price = _price;
    }

    Drink(const Drink& other)
    {
        Copy(other);
    }

    Drink& operator=(const Drink& other)
    {
        Copy(other);
        return* this;
    }

    void Copy(const Drink& other)
    {
        liters = other.liters;
        price = other.price;
    }

    float get_liters() const
    {
        return liters;
    }

    float get_price() const
    {
        return price;
    }

    virtual void Print() const
    {
        cout << "Name: ";
        for (int i = 0; i < strlen(name); i++)
            cout << name[i];
        cout << endl;
        cout << "Liters: " << liters << endl;
        cout << "Price: " << price << endl;
    }

    ~Drink()
    {
        delete[] name;
    }

protected:
    char* name;
    float liters;
    float price;
};

class WithoutAlcohol : public Drink
{
public:

    WithoutAlcohol(const char* _name, float _liters, float _price, float _grams_sugar)
    : Drink(_name, _liters, price)
    {
        grams_sugar = _grams_sugar;
    }

    WithoutAlcohol(const WithoutAlcohol& other)
    : Drink(other)
    {
        Copy(other);
    }

    float get_grams() const
    {
        return grams_sugar;
    }

    WithoutAlcohol& operator=(const WithoutAlcohol& other)
    {
        Copy(other);
        return* this;
    }

    void Copy(const WithoutAlcohol& other)
    {
        grams_sugar = other.grams_sugar;
    }

    void Print() const
    {
        cout << "Name of the drink ";
        for (int i = 0; i < strlen(name); i++)
            cout << name[i];
        cout << endl << "Volume of the drink " << liters << endl;
        cout << "Price of the drink " << price << endl;
        cout << "Grams of sugar " << grams_sugar << endl;
    }

private:
    float grams_sugar;
};

class WithAlcohol : public Drink
{
public:

    WithAlcohol(const char* _name, float _liters, float _price, float _percent_alcohol)
    : Drink(_name, _liters, _price)
    {
        percent_alcohol = _percent_alcohol;
    }

    WithAlcohol(const WithAlcohol& other)
    : Drink(other)
    {
        Copy(other);
    }

    WithAlcohol& operator=(const WithAlcohol& other)
    {
        Copy(other);
        return* this;
    }

    void Copy(const WithAlcohol& other)
    {
        percent_alcohol = other.percent_alcohol;
    }

    float get_percent() const
    {
        return percent_alcohol;
    }

    void Print() const
    {
        cout << "Name of the drink ";
        for (int i = 0; i < strlen(name); i++)
            cout << name[i];
        cout << endl << "Volume of the drink " << liters << endl;
        cout << "Price of the drink " << price << endl;
        cout << "Alcohol percentage " << percent_alcohol << endl;
    }

private:
    float percent_alcohol;
};

int main()
{
    Drink * d = new WithoutAlcohol("QWER", 2, 2.34, 1);
    d->Print();

    Drink * d2 = new WithAlcohol("ASDFff", 2.22, 1.99, 4);
    d2->Print();

    return 0;
}
