#include "stdafx.h"
#include "Plane.hpp"

Plane::Plane(string _ownerCompany, double _maxFlyingDistance, double _maxSpeedPerHour,
	int _amountOfNeededCrew, int _amountOfMaxPassengers, Condition _condition, int _wingsSpan)
	: Aircraft(_ownerCompany, _maxFlyingDistance, _maxSpeedPerHour, _amountOfNeededCrew, _amountOfMaxPassengers, _condition),
		wingSpan(_wingsSpan)
{

}

int Plane::Get_wingSpan()
{
	return wingSpan;
}
