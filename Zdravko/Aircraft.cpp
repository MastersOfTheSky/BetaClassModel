#include "Aircraft.hpp"

Aircraft::Aircraft(string _ownerCompany, double _maxFlyingDistance, double _maxSpeedPerHour,
	int _amountOfNeededCrew, int _amountOfMaxPassengers, Condition _condition) :
		ownerCompany(_ownerCompany), maxFlyingDistance(_maxFlyingDistance), maxSpeedPerHourInKm(_maxSpeedPerHour),
		amountOfNeededCrew(_amountOfNeededCrew), amountOfMaxPassengers(_amountOfMaxPassengers), condition(_condition)
		
{
}

Condition Aircraft::Get_condition()
{
	return condition;
}

void Aircraft::Set_condition(Condition _condition)
{
	condition = _condition;
}

double Aircraft::Get_max_speed()
{
	return maxSpeedPerHourInKm;
}

double Aircraft::Get_max_flying_distance()
{
	return maxFlyingDistance;
}

int Aircraft::Get_max_amount_passengers()
{
	return amountOfMaxPassengers;
}

int Aircraft::Get_crew_amount()
{
	return amountOfNeededCrew;
}

string Aircraft::Get_owner_company()
{
	return ownerCompany;
}

void Aircraft::Set_owner(string owner)
{
	ownerCompany = owner;
}

int Aircraft::MakeAFlight(string destination, double distance)
{
	int timeInMinutes;
	int speed = Get_max_speed() / 2;               //Useless code for now
	timeInMinutes = (distance / speed) * 60;

	return timeInMinutes;
}
