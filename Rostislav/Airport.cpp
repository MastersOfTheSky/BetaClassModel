#include <iostream>
#include "Airport.hpp"

using namespace std;


Airport::Airport(char* city, char* country, char* name, int numberOfTerminals, int maxCapacity)
: _city(city), _country(country), _name(name), _numberOfTerminals(numberOfTerminals), _maxCapacity(maxCapacity) {};

void Airport::print() const
{
    cout << _city << endl
    << _country << endl
    << _name << endl
    << _numberOfTerminals << endl
    << _maxCapacity << endl;
}

int main()
{
    Airport a("Sofia", "Bulgaria", "Sofiisko Letishte", 2, 200);
    a.print();

    return 0;
}
