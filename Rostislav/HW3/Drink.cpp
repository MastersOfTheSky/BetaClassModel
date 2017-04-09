#include <iostream>
#include <cstring>

using namespace std;

class Drink
{
public:

    void set_values(int a, float b)
    {
        litres = a;
        price = b;
    }

    int get_litres() const
    {
        return litres;
    }

    float get_price() const
    {
        return price;
    }

    void print() const;

protected:
    int litres;
    float price;
};

class WithoutAlcohol : public Drink
{
public:

    void set_name()
    {
        cout << "Please enter the name ";
        cin.getline(name, 30);
    }

    void set_sugar()
    {
        cout << "Please enter how much sugar the drink contains (in grams) ";
        cin >> grams_sugar;
    }

    void print() const
    {
        set_name();
        set_sugar();

        cout << "Name of the drink ";
        for (int i = 0; i < strlen(name); i++)
            cout << name[i];
        cout << endl << "Volume of the drink " << litres << endl;
        cout << "Price of the drink " << price << endl;
        cout << "Grams of sugar " << grams_sugar << endl;
    }

private:
    char name[30];
    float grams_sugar;
};

class WithAlcohol : public Drink
{
public:

    void set_name()
    {
        cout << "Please enter the name ";
        cin.getline(name, 30);
    }

    void set_alcohol()
    {
        cout << "Please enter the alcohol percentage ";
        cin >> percent_alcohol;
    }

    void print() const
    {
        set_name();
        set_alcohol();

        cout << "Name of the drink ";
        for (int i = 0; i < strlen(name); i++)
            cout << name[i];
        cout << endl << "Volume of the drink " << litres << endl;
        cout << "Price of the drink " << price << endl;
        cout << "Alcohol percentage " << percent_alcohol << endl;
    }

private:
    char name[30];
    float percent_alcohol;
};

int main()
{
    WithoutAlcohol d1;
    Drink * without = &d1;
    without->set_values(330, 1.23);
    d1.print();

    WithAlcohol d2;
    Drink * with = &d2;
    with->set_values(500, 2.35);
    d2.print();

    return 0;
}
