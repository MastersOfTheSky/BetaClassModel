#include "Airport.hpp"

using namespace std;


Airport::Airport(string _city, string _country, string _name,
	int _numberOfTerminals, int _maxCapacity, Type _type)
		: city(_city), country(_country), name(_name),
		numberOfTerminals(_numberOfTerminals), maxCapacity(_maxCapacity), type(_type) {}

string Airport::Get_city() const
{
	return city;
}

string Airport::Get_country() const
{
	return country;
}

string Airport::Get_name() const
{
	return name;
}

int Airport::Get_numberOfTerminals() const
{
	return numberOfTerminals;
}

int Airport::Get_maxCapacity() const
{
	return maxCapacity;
}

Type Airport::Get_type() const
{
	return type;
}




