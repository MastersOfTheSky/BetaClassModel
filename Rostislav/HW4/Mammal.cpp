#include <iostream>
#include <cstring>

using namespace std;


class Mammal
{
public:

    Mammal(const char* _species_name, const char* _mammal_name, int _age)
    {
        species_name = new char[31];
        mammal_name = new char[31];
        strcpy(species_name, _species_name);
        strcpy(mammal_name, _mammal_name);
        age = _age;
    }

    Mammal(const Mammal& other)
    {
        Copy(other);
    }

    int get_age() const
    {
        return age;
    }

    const char* get_species() const
    {
        return species_name;
    }

    const char* get_mammal() const
    {
        return mammal_name;
    }

    virtual Copy(const Mammal& other)
    {
        species_name = new char[31];
        mammal_name = new char[31];
        age = other.age;
        for (int i = 0; i < strlen(other.species_name); i++)
            species_name[i] = other.species_name[i];
        for (int i = 0; i < strlen(other.mammal_name); i++)
        {
            mammal_name[i] = other.mammal_name[i];
        }
    }

    Mammal& operator=(const Mammal& other)
    {
        Copy(other);
        return* this;
    }

    virtual void Print() const
    {
        cout << "Species name: ";
        for (int i = 0; i < strlen(species_name); i++)
            cout << species_name[i];

        cout << endl << "Mammal name: ";
        for (int i = 0; i < strlen(mammal_name); i++)
            cout << mammal_name[i];

        cout << endl << "Age: " << age << endl;
    }

    ~Mammal()
    {
        delete[] species_name;
        delete[] mammal_name;
    }

protected:
    char* species_name;
    char* mammal_name;
    int age;
};

class Human: public Mammal
{
public:

    Human(const char* _species_name, const char* _mammal_name, int _age, const char* _nationality)
    : Mammal(_species_name, _mammal_name, _age)
    {
        nationality = new char[31];
        strcpy(nationality, _nationality);
    }

    Human(const Human& other)
    : Mammal(other)
    {
        Copy(other);
    }

    const char* get_nationality() const
    {
        return nationality;
    }

    void Copy(const Human& other)
    {
        nationality = new char[31];
        for (int i = 0; i < strlen(other.nationality); i++)
        {
            nationality[i] = other.nationality[i];
        }
    }

    Human& operator=(const Human& other)
    {
        Copy(other);
        return* this;
    }

    void Print() const
    {
        cout << "Species name: Homo Sapiens" << endl;
        cout << "Mammal name: ";
        for (int i = 0; i < strlen(mammal_name); i++)
            cout << mammal_name[i];
        cout << endl << "Nationality: ";
        for (int i = 0; i < strlen(nationality); i++)
            cout << nationality[i];
        cout << endl << "Age: " << age << endl;

    }

    ~Human()
    {
        delete[] nationality;
    }

protected:
    char* nationality;
};

class Yinotheria: public Mammal
{
public:

    Yinotheria(const char* _species_name, const char* _mammal_name, int _age, const char* _subgroup)
    : Mammal(_species_name, _mammal_name, _age)
    {
        subgroup = new char[31];
        strcpy(subgroup, _subgroup);
    }

    Yinotheria(const Yinotheria& other)
    : Mammal(other)
    {
        Copy(other);
    }

    const char* get_subgroup() const
    {
        return subgroup;
    }

    void Copy(const Yinotheria& other)
    {
        subgroup = new char[31];
        for (int i = 0; i < strlen(other.subgroup); i++)
            subgroup[i] = other.subgroup[i];
    }

    Yinotheria& operator=(const Yinotheria& other)
    {
        Copy(other);
        return* this;
    }

    void Print() const
    {
        cout << "Species name: ";
        for (int i = 0; i < strlen(species_name); i++)
            cout << species_name[i];

        cout << endl << "Subgroup: ";
        for(int i = 0; i < strlen(subgroup); i++)
            cout << subgroup[i];

        cout << endl << "Mammal name: ";
        for (int i = 0; i < strlen(mammal_name); i++)
            cout << mammal_name[i];

        cout << endl << "Age: " << age << endl;
    }

    ~Yinotheria()
    {
        delete[] subgroup;
    }

protected:
    char* subgroup;
};

int main()
{

    Mammal* m = new Human("Homo Sapiens", "Ivan Ivanov", 23, "Russian");
    m->Print();

    return 0;
}
