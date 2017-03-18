#include <iostream>
#include "ControlTower.hpp"

using namespace std;


ControlTower::ControlTower(char* radioCode, int frequency, int numberOfEmployees)
: _radioCode(radioCode), _frequency(frequency), _numberOfEmployees(numberOfEmployees)
{
    _capacityOfServicablePlanes = _numberOfEmployees*2;
};

void ControlTower::print() const
{
    cout << "The radio code is " << _radioCode << endl
    << "The frequency is " << _frequency << "Hz" << endl
    << "The number of employees is " << _numberOfEmployees << endl
    << "The capacity is " << get_capacityOfServicablePlanes() << endl;
}

int ControlTower::get_capacityOfServicablePlanes() const
{
    return _capacityOfServicablePlanes;
}

int main()
{
    ControlTower t("123xyzwqe312", 15320, 20);
    t.print();

    return 0;
}
