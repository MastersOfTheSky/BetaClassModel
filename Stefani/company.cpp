#include "company.h"
#include <iostream>
#include <string.h>
using namespace std;

Company::Company(char _name[30],char _location_of_the_company[100],int _number_of_planes,char _destinations[500])

{
    strcpy(name,_name);
    strcpy(location_of_the_company,_location_of_the_company);
    number_of_planes=_number_of_planes;
    strcpy(destinations,_destinations);
}

char* Company::get_name()
{
    return name;
}

char* Company::get_location_of_the_company()
{
    return location_of_the_company;
}

int Company::get_number_of_planes() const
{
    return number_of_planes;
}

 char* Company::get_destinations()
{
    return destinations;

}


void Company::Printing()
{
    cout << "name: " << name
        << "\nlocation of the company: " << location_of_the_company
        << "\nnumber of planes: " << number_of_planes
        << "\ndestinations " << get_destinations() << endl;
}
