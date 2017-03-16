#include "flight.hpp"
#include <iostream>
#include <string.h>

Flight::Flight()
{
    strcpy(destination, "where you want to go.");
    dater.day=1;
    dater.month=1;
    dater.year=2017;
    timer.hours=0;
    timer.mins=0;
    numberOfFlights=0;
}

Flight::Flight(char* _destination, int _day, int _month, int _year, int _hours, int _mins, int _numberOfFlights)
{
    strcpy(destination, _destination);
    dater.day=_day;
    dater.month=_month;
    dater.year=_year;
    timer.hours=_hours;
    timer.mins=_mins;
    numberOfFlights=_numberOfFlights;
}

char* Flight::get_destination()
{
    return destination;
}

int Flight::get_day() const
{
    return dater.day;
}

int Flight::get_month() const
{
    return dater.month;
}

int Flight::get_year() const
{
    return dater.year;
}

int Flight::get_hours() const
{
    return timer.hours;
}

int Flight::get_mins() const
{
    return timer.mins;
}

int Flight::get_number_of_identical_flights() const
{
    return numberOfFlights;
}

void Flight::set_time(int newHours, int newMins)
{
    timer.hours=newHours;
    timer.mins=newMins;
}

void Flight::printFlight() const
{
    std::cout<<"Flight to "<<destination
             <<"\nDate: "<<dater.day
             <<"/"<<dater.month
             <<"/"<<dater.year
             <<"\nFlights off: "<<timer.hours
             <<":"<<timer.mins
             <<"\n\n";
}
