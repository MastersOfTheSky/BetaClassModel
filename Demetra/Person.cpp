#include "Person.hpp"
#include <iostream>
#include <string.h>

using namespace std;

Person::Person()
{
    human = role::passanger;
    strcpy(humanName,"Your name is here");
    ticket = true;
    ticketClass = classes::first;
}

Person::Person(role _human, char* _humanName, classes _ticketClass)
{
    human = _human;
    strcpy(humanName, _humanName);
    if(Get_position_of_the_humans()==1)
        ticket=false;
    if(Get_position_of_the_humans()==2)
        ticket=true;
    ticketClass = _ticketClass;
}

char* Person::Get_position_of_the_human()
{
    switch(human)
    {
        case role::pilot : return "pilot"; break;
        case role::passanger : return "passanger"; break;
    }
}

int Person::Get_position_of_the_humans()
{
    switch(human)
    {
        case role::pilot : return 1; break;
        case role::passanger : return 2; break;
    }
}

char* Person::Get_name_of_the_human()
{
    return humanName;
}

int Person::Get_ticket_class()
{
    if(ticket)
    {
        switch(ticketClass)
        {
            case classes::first : return 1; break;
            case classes::second : return 2; break;
        }
    }
    else
        return 0;
}

void Person::PrintPerson()
{
    cout<< humanName << " is a "
        << Get_position_of_the_human()
        << ".\n";
    if(ticket)
    {
        cout<< "The person is in the "
            << Get_ticket_class()
            << " class of the plane.\n";
    }
}
