#include <iostream>
#include "Passenger.hpp"

using namespace std;


Passenger::Passenger(Passenger::Location clas_s, char* firstName, char* secondName, int seat, int terminal, float time_of_departure)
: _clas_s(clas_s), _firstName(firstName), _secondName(secondName), _seat(seat), _terminal(terminal), _time_of_departure(time_of_departure) {};

void Passenger::print() const
{
    cout << "Your name is " << _firstName
    << " " << _secondName << endl
    << "Your class is " << get_location() << endl
    << "Your seat is " << _seat << endl
    << "Your terminal is " << _terminal << endl
    << "Your time of departure is " << _time_of_departure << endl;
}

const char* Passenger::get_location() const
{
    switch (_clas_s)
    {
        case Business : return "Business";
        case Economy : return "Economy";
        case Vip : return "Vip";
    }
}

int main() {

    Passenger p((Passenger::Location::Business), "John", "Johnson", 25, 2, 13.53);
    p.print();

    return 0;
}
