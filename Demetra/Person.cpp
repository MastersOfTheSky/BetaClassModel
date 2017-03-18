#include "Person.hpp"
#include <iostream>
#include <string.h>

using namespace std;

Person::Person()
{
    strcpy(humanName,"Your name is here");
    ticket = true;
    ticketClass = classes::first;
}

Person::Person(char* _humanName, bool _ticket, classes _ticketClass)
{
    strcpy(humanName, _humanName);
    ticket = _ticket;
    ticketClass = _ticketClass;
}

char* Person::Get_name_of_the_human()
{
    return humanName;
}

int Person::Get_ticket_class()
{
    switch(ticketClass)
    {
        case classes::first : return 1; break;
        case classes::second : return 2; break;
    }
}

void Person::PrintPerson()
{
    cout<< humanName;
    if(ticket)
    {
        cout<< "is in the "
            << Get_ticket_class()
            << " class of the plane.\n";
    }
    else
        cout<< " has not have a ticket yet.";
}
