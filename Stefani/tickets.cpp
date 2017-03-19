#include "tickets.h"
#include <iostream>
#include <string.h>
using namespace std;

Ticket::Ticket(double _price,char _destination[30],Kind _status,int _seat,char _date_time[20],char _terminal[4])

{
    price = _price;
    strcpy(destination,_destination);
    status = _status;
    seat = _seat;
    strcpy(date_time,_date_time);
    strcpy(terminal,_terminal);


}
double Ticket::get_price() const
{
    return price;
}

char* Ticket::get_destination()
{
    return destination;
}

const char* Ticket::get_type_of_ticket() const
{
    switch(status)
    {
    case Kind::adult :
        return "Adult";
    case Kind::kid :
        return "Kid";
    case Kind::pensioner :
        return "Pensioner";

    }

}

int Ticket::get_seat()const
{
    return seat;
}

char* Ticket::get_date_time()
{
    return date_time;
}

char* Ticket::get_terminal()
{
    return terminal;
}

void Ticket::set_price(double new_price)
{
   price = new_price;
}

void Ticket::set_date_time(char* new_date_time)
{
    strcpy(date_time,new_date_time);
}


void Ticket::Printing()
{
    cout << "price: " << price
         << "\ndestination: " << destination
         << "\nseat: " << seat
         << "\ntype of ticket " << get_type_of_ticket()
         << "\nterminal" << terminal
         << "\ndate and time" << date_time << endl;

}
