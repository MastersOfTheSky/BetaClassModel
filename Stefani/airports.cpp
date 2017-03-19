#include "airports.h"
#include <iostream>
#include <string.h>
using namespace std;

Airports::Airports(char _name[30],char _location[20],int _number_of_terminals,Type _status)

{
    strcpy(name,_name);
    strcpy(location,_location);
    number_of_terminals = _number_of_terminals;
    status = _status;
}

char* Airports::get_name()
{
    return name;
}

char* Airports::get_location()
{
    return location;
}

int Airports::get_number_of_terminals() const
{
    return number_of_terminals;
}

const char* Airports::get_type_of_airport() const
{
    switch(status)
    {
    case Type::military :
        return "military";
    case Type::international :
        return "international";
    case Type::airfields :
        return "airfields";

    }

}

void Airports::Printing()
{
    cout << "name: " << name
         << "\nlocation: " << location
         << "\nnumber of terminals: " << number_of_terminals
         << "\nstatus " << get_type_of_airport() << endl;
}


