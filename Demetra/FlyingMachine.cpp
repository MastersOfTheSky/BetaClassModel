#include "FlyingMachine.hpp"
#include <iostream>
#include <string.h>

using namespace std;

FlyingMachine::FlyingMachine()
{
    maxPeopleInThePlane = 100;
    peopleForFlight = 0;
    strcpy(destination, "where you want to go");
}

FlyingMachine::FlyingMachine(flyingTypes _airplane, int _maxPeopleInThePlane, int _peopleForFlight, char* _destination)
{
    airplane = _airplane;
    maxPeopleInThePlane = _maxPeopleInThePlane;
    peopleForFlight = _peopleForFlight;
    strcpy(destination, _destination);
}

char* FlyingMachine::Get_type_of_plane()
{
    switch(airplane)
    {
        case flyingTypes::plane : return "plane";
        case flyingTypes::workingPlane : return "working plane";
    }
}

int FlyingMachine::Get_max_people_in_the_plane()
{
    return maxPeopleInThePlane;
}

int FlyingMachine::Get_the_people_in_the_plane()
{
    return peopleForFlight;
}

char* FlyingMachine::Get_destination_of_the_plane()
{
    return destination;
}

void FlyingMachine::Set_people_in_plane(int _seats_to_be_added)
{
    int availableSeats = View_available_seats();
    if(_seats_to_be_added <= availableSeats)
        peopleForFlight += _seats_to_be_added;
    else
    {
        peopleForFlight = maxPeopleInThePlane;
        cout<< "We are sorry. We do not have enough free seats. We were not capable of taking "
            << _seats_to_be_added - availableSeats
            << " people."
            << endl;
    }
}

int FlyingMachine::View_available_seats()
{
    return maxPeopleInThePlane - peopleForFlight;
}

void FlyingMachine::Print_information()
{
    cout<< "We are on " << Get_type_of_plane()
        << ".\nThe plane can take " << maxPeopleInThePlane
        << ".\nThe plane has " << peopleForFlight
        << " reserved seats.\nThe plane flies to " << destination
        << ".\nHave a good flight!" << endl;
}
