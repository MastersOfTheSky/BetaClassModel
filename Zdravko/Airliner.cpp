#include "stdafx.h"
#include "Airliner.hpp"

Airliner::Airliner(string _ownerCompany, double _maxFlyingDistance, double _maxSpeedPerHour,
	int _amountOfNeededCrew, int _amountOfMaxPassengers, Condition _condition, int _wingsSpan, int _numberOfSafetyBoats)
	: Plane(_ownerCompany, _maxFlyingDistance, _maxSpeedPerHour, _amountOfNeededCrew, _amountOfMaxPassengers, _condition, _wingsSpan),
	numberOfSafetyBoats(_numberOfSafetyBoats), areBoatsActivated(false), areSafetyBeltsActivated(false)
{
}

int Airliner::Get_number_of_safety_boats()
{
	return numberOfSafetyBoats;
}

void Airliner::ActivateSafeMode()
{
	areBoatsActivated = true;
	areSafetyBeltsActivated = true;
}

double Airliner::MakeAFlight(string destination, double distance)
{
	if (numberOfSafetyBoats == 0)
	{
		return -1;
	}

	return MakeAFlight(destination, distance);
}
