#include <iostream>
#include "Airplane.hpp"

using namespace std;


Airplane::Airplane(char* planeCode, char* companyName, int capacity, float timeOfArrival, float timeOfDeparture)
: _planeCode(planeCode), _companyName(companyName), _capacity(capacity), _timeOfArrival(timeOfArrival), _timeOfDeparture(timeOfDeparture) {};

void Airplane::print() const
{
    cout << "Plane code is " << _planeCode << endl
    << "Company name is " << _companyName << endl
    << "Capacity is " << _capacity << endl
    << "Time of arrival is " << _timeOfArrival << endl
    << "Time of departure is " << _timeOfDeparture << endl;
}

int main() {

    Airplane a("X123ZYY", "BG AIR", 350, 12.00, 13.23);
    a.print();

    return 0;
}
