#include "stdafx.h"
#include "Person.hpp"

Person::Person(string _fullName, int _age, Gender _gender, int _flights)
	: fullName(_fullName), age(_age), gender(_gender), flights(_flights)
{
}

string Person::Get_full_name()
{
	return fullName;
}

int Person::Get_age()
{
	return age;
}

Gender Person::Get_gender()
{
	return gender;
}

int Person::Get_flights()
{
	return flights;
}
