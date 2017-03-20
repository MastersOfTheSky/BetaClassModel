#include "stdafx.h"
#include "Helicopter.hpp"

Helicopter::Helicopter(string _ownerCompany, double _maxFlyingDistance, double _maxSpeedPerHour,
	int _amountOfNeededCrew, int _amountOfMaxPassengers, Condition _condition, bool _hasDoors) :
		Aircraft(_ownerCompany, _maxFlyingDistance, _maxSpeedPerHour, _amountOfNeededCrew, _amountOfMaxPassengers, _condition),
		hasDoors(_hasDoors)
{
}

bool Helicopter::Has_doors()
{
	return hasDoors;
}
