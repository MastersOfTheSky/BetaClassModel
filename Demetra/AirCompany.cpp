#include "AirCompany.hpp"
#include "Flights.hpp"
#include <iostream>
#include <string.h>

using namespace std;

AirCompany::AirCompany()
{
    strcpy(companyName, "Your company name");
    numberOfFlyingMachines = 0;
    activeFlightsOnTheMoment = 0;
}

AirCompany::AirCompany(_companyName, int _numberOfFlyingMachines, int _activeFlightsOnTheMoment)
{
    strcpy(companyName, _companyName);
    numberOfFlyingMachines = _numberOfFlyingMachines;
    activeFlightsOnTheMoment = _activeFlightsOnTheMoment;
}

char* AirCompany::Get_company_name()
{
    return companyName;
}

int AirCompany::Get_number_of_flying_machines()
{
    return numberOfFlyingMachines;
}

int AirCompany::Get_active_flights()
{
    return activeFlightsOnTheMoment;
}

void AirCompany::Set_active_flights(Flight _other)
{
    char name[200] = "";
    strcpy(name,_other.Get_company_name());
    int len = strlen(name), counter=0;
    for(int i = 0; i < len; i ++)
        if(name[i] == companyName[i])
            counter ++;
    if(counter == len)
        activeFlightsOnTheMoment = _other.numberOfFlights;
}

void AirCompany::Set_number_of_machines(int _newMachines)
{
    numberOfFlyingMachines += _newMachines;

 ///   cout<< "Choose what kind of machine you want to add: plane or working plane" << endl;
 ///unfinished idea;
}

void AirCompany::PrintCompany()
{
    cout<< "Company's name: " << companyName
        << "\nThe company has " << numberOfFlyingMachines
        << "in its hambar.\nThe company has "
        << activeFlightsOnTheMoment <<" at this moment."
        <<endl;
}
