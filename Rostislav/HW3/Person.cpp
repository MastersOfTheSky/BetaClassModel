#include <iostream>
#include <cstring>

using namespace std;

class Person
{
public:

    void set_values(const char* a, const char* b, int c)
    {
        strcpy(first_name, a);
        strcpy(second_name, b);
        age = c;
    }

    const char* get_first_name() const
    {
        return first_name;
    }

    const char* get_second_name() const
    {
        return second_name;
    }

    int get_age() const
    {
        return age;
    }

    void print() const;

protected:
    char first_name[25];
    char second_name[25];
    int age;
};

class Passenger: public Person
{
public:

    void set_nationality()
    {
        cout << "Please enter the nationality ";
        cin.getline(nationality, 25);
    }

    void set_destination()
    {
        cout << "Please enter the destination ";
        cin.getline(destination_airfield, 50);
    }

    void print()
    {
        set_nationality();
        set_destination();

        cout << "Name: ";
        for (int i = 0; i < strlen(first_name); i++)
            cout << first_name[i];
        cout << " ";
        for (int i = 0; i < strlen(second_name); i++)
            cout << second_name[i];
        cout << endl << "Age: " << age << endl;
        cout << "Nationality: ";
        for (int i = 0; i < strlen(nationality); i++)
            cout << nationality[i];
        cout << endl << "Destination: ";
        for (int i = 0; i < strlen(destination_airfield); i++)
            cout << destination_airfield[i];
        cout << endl;
    }

private:
    char nationality[25];
    char destination_airfield[50];
};

class Worker: public Person
{
public:

    void set_employment()
    {
        cout << "Please enter the employment ";
        cin.getline(employment, 35);
    }

    void set_xp()
    {
        cout << "Please enter the experience years ";
        cin >> xp;
    }

    void print()
    {
        set_employment();
        set_xp();

        cout << "Name: ";
        for (int i = 0; i < strlen(first_name); i++)
            cout << first_name[i];
        cout << " ";
        for (int i = 0; i < strlen(second_name); i++)
            cout << second_name[i];
        cout << endl << "Age: " << age << endl;
        cout << "Works as a: ";
        for (int i = 0; i < strlen(employment); i++)
            cout << employment[i];
        cout << endl << "Experience: " << xp << endl;
    }

private:
    char employment[35]; // What the person works
    int xp; // experience years
};

int main()
{
    Passenger p;
    Person * pass = &p;
    pass->set_values("Simon", "Rusev", 23);
    p.print();

    Worker w;
    Person * wor = &w;
    wor->set_values("Maria", "Marinova", 22);
    w.print();

    return 0;
}
