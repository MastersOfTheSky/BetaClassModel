#ifndef FLYINGMACHINE_HPP
#define FLYINGMACHINE_HPP
#include "person.hpp"

class FlyingMachine
{
public:
    enum class flyingTypes
    {
        plane,
        workingPlane
    };

    FlyingMachine();
    FlyingMachine(flyingTypes, int, int, char*);

    char* Get_type_of_plane();
    int Get_max_people_in_the_plane();
    int Get_the_people_in_the_plane();
    char* Get_destination_of_the_plane();

    void Set_people_in_plane(int);

    int View_available_seats();

    void Print_information();

private:
    flyingTypes airplane;
    char* companyName[100];
    int maxPeopleInThePlane;
    int peopleForFlight;
    char destination[200];
};

#endif // FLYINGMACHINE_HPP
