#include "discounts.h"
#include <iostream>
#include <string.h>
using namespace std;

Discounts::Discounts(double _price_for_kids, double _price_for_pensioners, double _price_for_groups, char _destination[20], double _low_price)

{
    price_for_kids = _price_for_kids;
    price_for_pensioners = _price_for_pensioners;
    price_for_groups = _price_for_groups;
    strcpy(destination, _destination);
    low_price = _low_price;
}


double Discounts::get_price_for_kids() const
{
    return price_for_kids;
}

double Discounts::get_price_for_pensioners() const
{
    return price_for_pensioners;
}

double Discounts::get_price_for_groups()const
{
    return price_for_groups;
}

char* Discounts::get_destination()
 {
     return destination;
 }

double Discounts::get_low_price() const
{
    return low_price;
}

void Discounts::set_price_for_kids(double new_price_for_kids)
{
   price_for_kids = new_price_for_kids;
}

void Discounts::set_price_for_pensioners(double new_price_for_pensioners)
{
    price_for_pensioners = new_price_for_pensioners;
}

void Discounts::set_price_for_groups(double new_price_for_groups)
{
   price_for_groups = new_price_for_groups;
}

void Discounts::set_low_price(double new_low_price)
{
   low_price = new_low_price;
}

void Discounts::Printing()
{
    cout << "price for kids: " << price_for_kids
         << "\nprice for pensioners: " << price_for_pensioners
         << "\nprice for groups: " << price_for_groups
         << "\ndestination" << destination
         << "nlow price: " << low_price << endl;

}
