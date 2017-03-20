#include "stdafx.h"
#include "Passenger.hpp"

Passenger::Passenger(string _fullName, int _age, Gender _gender, int _flights, string _seat, PassengerType _type, LuggageType _luggage)
	: Person(_fullName, _age, _gender, _flights), seat(_seat), type(_type), luggage(_luggage)
{
}

PassengerType Passenger::Get_type()
{
	return type;
}

void Passenger::Set_type(PassengerType type)
{
	this->type = type;
}

string Passenger::Get_seat()
{
	return seat;
}

void Passenger::Set_seat(string seat)
{
	this->seat = seat;
}

LuggageType Passenger::Get_luggage_type()
{
	return luggage;
}

void Passenger::Set_luggage_type(LuggageType type)
{
	this->luggage = type;
}
