#include "Flight.hpp"
#include <iostream>
#include <string.h>

Flight::Flight()
{
    strcpy(airCompanyName, "Company name.")
    strcpy(destination, "where you want to go.");
    dater.day = 1;
    dater.month = 1;
    dater.year = 2017;
    timer.hours = 0;
    timer.mins = 0;
    numberOfFlights = 0;
    ticketPrice = 0;
}

Flight::Flight(char*, _airCompanyName, char* _destination, int _day, int _month, int _year, int _hours,
               int _mins, int _numberOfFlights, double _newTicketPrice)
{
    strcpy(airCompanyName, _airCompanyName);
    strcpy(destination, _destination);
    dater.day = _day;
    dater.month = _month;
    dater.year =_year;
    timer.hours = _hours;
    timer.mins = _mins;
    numberOfFlights = _numberOfFlights;
    ticketPrice = _newTicketPrice;
}

char* Flight::Get_company_name()
{
    return airCompanyName;
}

char* Flight::Get_destination()
{
    return destination;
}

int Flight::Get_day() const
{
    return dater.day;
}

int Flight::Get_month() const
{
    return dater.month;
}

int Flight::Get_year() const
{
    return dater.year;
}

int Flight::Get_hours() const
{
    return timer.hours;
}

int Flight::Get_mins() const
{
    return timer.mins;
}

int Flight::Get_number_of_flights() const
{
    return numberOfFlights;
}

double Flight::Get_ticketPrice() const
{
    return ticketPrice;
}

void Flight::Set_time(int _newHours, int _newMins)
{
    timer.hours = _newHours;
    timer.mins = _newMins;
}

void Flight::Print_flight() const
{
    std::cout<< "Flight to " << destination
             << "\nDate: " << dater.day
             << "/" << dater.month
             << "/" << dater.year
             << "\nFlights off: " << timer.hours
             << ":" << timer.mins
             << "\n\n";
}

void Flight::Cancel_this_flight()
{
    strcpy(destination, "The flight is canceled!");
    dater.day = 0;
    dater.month = 0;
    dater.year = 0;
    timer.hours = 0;
    timer.mins = 0;
    numberOfFlights = _other.numberOfFlights - 1;
    ticketPrice = 0;
}

void Flight:: Cancel_flight(Flight _other)
{
    strcpy(_other.destination, "The flight is canceled!");
    _other.dater.day = 0;
    _other.dater.month = 0;
    _other.dater.year = 0;
    _other.timer.hours = 0;
    _other.timer.mins = 0;
    _other.numberOfFlights = _other.numberOfFlights - 1;
    _other.ticketPrice = 0;
}

