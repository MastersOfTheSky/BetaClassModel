#include <iostream>
#include"Luggage.hpp"

using namespace std;


Luggage::Luggage(type of_lugg, float mass, float weight)
: _of_lugg(of_lugg), _mass(mass), _weight(weight) {};

void Luggage::print() const {
    cout << "The Luggage type is " << get_type() << endl
    << "The mass is " << _mass << endl
    << "The weight is " << _weight << endl;
}

const char* Luggage::get_type() const {
    switch (_of_lugg) {
        case Personal : return "Personal";
        case Suitcase : return "Suitcase";
    }
}

int main() {

    Luggage lug((Luggage::type::Personal), 23.231, 412.123);
    lug.print();

    return 0;
}
