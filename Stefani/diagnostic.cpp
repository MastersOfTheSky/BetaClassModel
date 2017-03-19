#include "diagnostic.h"
#include <iostream>
#include <string.h>
using namespace std;

Diagnostic::Diagnostic(TypeOfAircraft _aircraft, char _date_of_last_check [20], char _found_problems [500], bool _out_of_order)
{
    aircraft = _aircraft;
    strcpy(date_of_last_check,_date_of_last_check);
    strcpy(found_problems,_found_problems);
    out_of_order = _out_of_order;
}
const char* Diagnostic::get_type_of_aircraft() const
{
    switch(aircraft)
    {
    case TypeOfAircraft::airplane :
        return "Airplane";
    case TypeOfAircraft::helicopter :
        return "Helicopter";
    case TypeOfAircraft::other :
        return "Other";
    }

}

char* Diagnostic::get_date_of_last_check()
{
    return date_of_last_check;
}

char* Diagnostic::get_found_problems()
{
    return found_problems;
}

bool Diagnostic::get_out_of_order()const
{
    return out_of_order;
}

void Diagnostic::Printing()
{
    cout << "type of aircraft: " << get_type_of_aircraft()
         << "\ndate of last check: " << date_of_last_check
         << "\nout of order: " << out_of_order << endl;

}
