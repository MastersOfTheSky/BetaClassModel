#include <iostream>
#include <cstring>

using namespace std;


class Person
{
public:

    Person(const char* _first_name, const char* _second_name, int _age)
    {
        first_name = new char[31];
        second_name = new char [31];
        strcpy(first_name, _first_name);
        strcpy(second_name, _second_name);
        age = _age;
    }

    Person(const Person& other)
    {
        Copy(other);
    }

    virtual void Copy(const Person& other)
    {
        age = other.age;
        first_name = new char[31];
        second_name = new char[31];
        for (int i = 0; i < strlen(other.first_name); i++)
            first_name[i] = other.first_name[i];
        for (int i = 0; i < strlen(other.second_name); i++)
            second_name[i] = other.second_name[i];
    }

    virtual Person& operator=(const Person& other)
    {
        Copy(other);
        return* this;
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

    virtual void Print() const
    {
        cout << "First name: ";
        for (int i = 0; i < strlen(first_name); i++)
            cout << first_name[i];
        cout << endl << "Second name: ";
        for (int i = 0; i < strlen(second_name); i++)
            cout << second_name[i];
        cout << endl << "Age: " << age << endl;
    }

    ~Person()
    {
        delete[] first_name;
        delete[] second_name;
    }

protected:
    char* first_name;
    char* second_name;
    int age;
};

class Passenger: public Person
{
public:

    Passenger(const char* _first_name, const char* _second_name, int _age, const char* _nationality, const char* _destination_airfield)
    :Person(_first_name, _second_name, _age)
    {
        nationality = new char[31];
        destination_airfield = new char[31];
        strcpy(nationality, _nationality);
        strcpy(destination_airfield, _destination_airfield);
    }

    Passenger(const Passenger& other) : Person(other)
    {
        Copy(other);
    }

    const char* get_nationality() const
    {
        return nationality;
    }

    const char* get_destination() const
    {
        return destination_airfield;
    }

    void Copy(const Passenger& other)
    {
        nationality = new char[31];
        destination_airfield = new char[31];
        for (int i = 0; i < strlen(other.nationality); i++)
            nationality[i] = other.nationality[i];
        for (int i = 0; i < strlen(other.destination_airfield); i++)
            destination_airfield[i] = other.destination_airfield[i];
    }

    Passenger& operator=(const Passenger& other)
    {
        Copy(other);
        return *this;
    }

    void Print() const
    {
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

    ~Passenger()
    {
        delete[] nationality;
        delete[] destination_airfield;
    }

private:
    char* nationality;
    char* destination_airfield;
};

class Worker: public Person
{
public:

    Worker(const char* _first_name, const char* _second_name, int _age, const char* _employment, int _xp)
    : Person(_first_name, _second_name, _age)
    {
        employment = new char[31];
        strcpy(employment, _employment);
        xp = _xp;
    }

    Worker(const Worker& other) : Person(other)
    {
        Copy(other);
    }

    const char* get_employment() const
    {
        return employment;
    }

    int get_age() const
    {
        return age;
    }

    void Copy(const Worker& other)
    {
        employment = new char[30];
        xp = other.xp;
        for (int i = 0; i < strlen(other.employment); i++)
            employment[i] = other.employment[i];
    }

    Worker& operator=(const Worker& other)
    {
        Copy(other);
        return* this;
    }

    void Print() const
    {
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

    ~Worker()
    {
        delete[] employment;
    }

protected:
    char* employment;
    int xp;
};

void Enter()
{
    char answer;

    while (answer != 'N')
    {
        char first_name[31], second_name[31], nationality[31], destination_airfield[31], employment[31];
        int age, xp;

        cout << "Press P to create a Passenger, or W to create a Worker" << endl;
        cin >> answer;

        cout << "Please enter the first name: " << endl;
        cin.ignore(50, '\n');
        cin.getline(first_name, 31);
        cout << "Please enter the second name: " << endl;
        cin.getline(second_name, 31);
        cout << "Please enter the age: " << endl;
        cin >> age;

        if (answer == 'P')
        {
            cout << "Please enter the nationality: " << endl;
            cin.ignore(50, '\n');
            cin.getline(nationality, 31);
            cout << "Please enter the destination: " << endl;
            cin.getline(destination_airfield, 31);

            Person* p = new Passenger(first_name, second_name, age, nationality, destination_airfield);
            p->Print();
        }
        else if (answer == 'W')
        {
            cout << "Please enter the job: " << endl;
            cin.ignore(50, '\n');
            cin.getline(employment, 31);
            cout << "Please enter the experience in years: " << endl;
            cin >> xp;

            Person * w = new Worker(first_name, second_name, age, employment, xp);
            w->Print();
        }

        cout << "Would you like to create another person Y/N?" << endl;
        cin >> answer;

        if (answer == 'N')
            break;
    }
}

int main()
{
    Enter();

    return 0;
}
