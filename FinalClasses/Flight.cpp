#include "stdafx.h"
#include "Flight.hpp"

Flight::Flight(string _airCompanyName, string _destination, DateTime _flyOfTime, DateTime _landingTime, Airliner _airliner)
	: airCompanyName(_airCompanyName), destination (_destination),
		flyOfTime(_flyOfTime), landingTime(_landingTime), airPlane(_airliner)
{
}

string Flight::Get_company()
{
	return airCompanyName;
}

string Flight::Get_destination()
{
	return destination;
}

DateTime Flight::Get_flyOf_time()
{
	return flyOfTime;
}

void Flight::Set_flyOf_time(DateTime time)
{
	this->flyOfTime = time;
}

DateTime Flight::Get_landing_time()
{
	return landingTime;
}

void Flight::Set_landing_time(DateTime time)
{
	this->landingTime = time;
}

void Flight::AddPassenger(Passenger passenger)
{
	passengers.push_back(passenger);
}

Airliner Flight::Get_airliner()
{
	return airPlane;
}

void Flight::Set_airliner(Airliner airliner)
{
	this->airPlane = airliner;
}
