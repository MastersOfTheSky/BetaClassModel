#ifndef AIRPORT_HPP
#define AIRPORT_HPP

#include <string>
#include <iostream>

using std::string;

enum Type
{
	military,
	international,
	airfields
};

class Airport
{
public:
    Airport(string, string, string, int, int, Type);

    string Get_city() const;
    string Get_country() const;
    string Get_name() const;
    int Get_numberOfTerminals() const;
    int Get_maxCapacity() const;
	Type Get_type() const;

private:

	Type type;
    string city;
    string country;
    string name;
    int numberOfTerminals;
    int maxCapacity;

};

#endif //
