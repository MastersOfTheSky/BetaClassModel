#include <iostream>
#include <cstring>

using namespace std;


class Mammal
{
public:
    void set_values(const char* a, int b)
    {
        strcpy(mammal_name, a);
        age = b;
    }

    void print() const;

protected:
    char species_name[50];
    char mammal_name[50];
    int age;
};

class Human: public Mammal
{
public:

    void print() const
    {
        cout << "Homo Sapiens" << endl << "Mammal name: ";

        for (int i = 0; i < strlen(mammal_name); i++)
            cout << mammal_name[i];

        cout << endl << "Age: " << age << endl;
    }

};

class Yinotheria: public Mammal
{
public:

    void get_species()
    {
        cin.getline(species_name, 50);
    }

    void print() const
    {
        get_species();
        cout << "Species name: ";
        for (int i = 0; i < strlen(species_name); i++)
            cout << species_name[i];

        cout << endl << "Mammal name: ";

        for (int i = 0; i < strlen(mammal_name); i++)
            cout << mammal_name[i];

        cout << endl << "Age: " << age << endl;
    }
};


int main()
{
    Human h;
    Mammal * hum = &h;
    hum->set_values("Ivan Ivanov", 19);
    h.print();

    Yinotheria y;
    Mammal * yin = &y;
    yin->set_values("Abc", 3);
    y.print();

    return 0;
}
