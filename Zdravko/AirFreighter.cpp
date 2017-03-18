#include "stdafx.h"
#include "AirFreighter.hpp"

AirFreighter::AirFreighter(string _ownerCompany, double _maxFlyingDistance, double _maxSpeedPerHour,
	int _amountOfNeededCrew, int _amountOfMaxPassengers, Condition _condition, int _wingSpan, int _maxLuggageWeight)
	: Plane(_ownerCompany, _maxFlyingDistance, _maxSpeedPerHour, _amountOfNeededCrew, _amountOfMaxPassengers, _condition, _wingSpan),
	maxLuggageWeight(_maxLuggageWeight)
{
}

int AirFreighter::MakeAFlight(string destination, int distance)
{
	Condition cond = Get_condition();
	if (cond != good)
	{
		return -1;
	}

	else return MakeAFlight(destination, distance);
}
