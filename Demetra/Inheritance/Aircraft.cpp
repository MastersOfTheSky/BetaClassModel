#include <iostream>
#include "aircraft.hpp"

Aircraft::Aircraft():
	flying(false), maxCapacityOfFuel(500), capacityOfPeople(0), capacityOfFuel(500), maxCapacityOfPeople(50), condition(Condition::good), company("no company") {}

Aircraft::Aircraft(bool _flying, string _company, Condition _condition): 
	flying(_flying), company(_company), condition(_condition), maxCapacityOfFuel(500), capacityOfPeople(0), capacityOfFuel(500), maxCapacityOfPeople(50) {}
/*
Aircraft::Aircraft(const Aircraft& other)
{
	CopyFrom(other);
}

Aircraft Aircraft::operator=(const Aircraft& other)
{
	Clear();
	CopyFrom(other);
}


Aircraft::~Aircraft()
{
	Clear();
}
*/
bool Aircraft::IsFlying() const
{
	return flying;
}

long Aircraft::CapacityofFuel() const
{
	return maxCapacityOfFuel;
}

long Aircraft::CapacityofFuelLeft() const
{
	return capacityOfFuel;
}

long Aircraft::CapacityOfPeople() const
{
	return capacityOfPeople;
}

long Aircraft::MaxCapacityOfPeople() const
{
	return maxCapacityOfPeople;
}

bool Aircraft::IsInProperCondition() const
{
	switch (condition)
	{
		case Condition::good: return true; break;	
		case Condition::bad: return false; break;
	}
}

string Aircraft::OwnerCompany() const
{
	return company;
}

// maybe in the future we will come up with another smarter method to change the capacity of fuel and how much of it has left (calculate it)
// but for now, this stupid method will do some work i guess 
void Aircraft::ChangeCapacityOfFuel(long _capacity)
{
	capacityOfFuel = _capacity;

}
// same with the number of passengers left 
void Aircraft::ChangeCapacityOfPeople(long _capacity)
{
	capacityOfPeople = _capacity;
}

void Aircraft::AddNewPeople(long _capacity)  
{
	if (capacityOfPeople + _capacity > maxCapacityOfPeople)
		capacityOfPeople = maxCapacityOfPeople;
	
	capacityOfPeople += _capacity;
}

void Aircraft::ChangeFlyingStatus(bool _flying)
{
	flying = _flying;
}

void Aircraft::ChangeCondition(Condition _condition)
{
	condition = _condition;
}

/* -------------------------------------------------------------- */

Helicopter::Helicopter() : 
	flying(false), maxCapacityOfFuel(500), capacityOfPeople(0), capacityOfFuel(500), condition(Condition::good), company("no company"), 
	maxCapacityOfPeople(10), purpose(Purpose::none) {}
Helicopter::Helicopter(bool _flying, string _company, Condition _condition, Purpose _purpose) : 
	flying(_flying), maxCapacityOfFuel(500), capacityOfPeople(0), capacityOfFuel(500), condition(Condition::good), company(_company),
	maxCapacityOfPeople(10), purpose(Purpose::none) {}

string Helicopter::ViewPurpose() const
{
	switch (purpose)
	{
		case Purpose::policeForces: return "police forces"; break;
		case Purpose::reports: return "media reports"; break;
		case Purpose::rescue: return "rescue teams"; break;
		case Purpose::transportObjects: return "transport objects"; break;
		case Purpose::transportPeople: return "transport people"; break;
		case Purpose::none: return "no purpose"; break;
	}
}

long Helicopter::CapacityOfPeople() const
{
	return capacityOfPeople;
}

long Helicopter::MaxCapacityOfPeople() const
{
	return maxCapacityOfPeople;
}

void Helicopter::AddNewPeople(long _capacity)
{
	if (capacityOfPeople + _capacity >= maxCapacityOfPeople)
		capacityOfPeople = maxCapacityOfPeople;
	else 
		capacityOfPeople += _capacity;
}

void Helicopter::ChangePurpose(Purpose _purpose)
{
	purpose = _purpose;
}

/* -------------------------------------------------------------- */
Airplane::Airplane(): Aircraft(), maxLuggage(500) {}
Airplane::Airplane(bool _flying, string _company, Condition _condition) : Aircraft(_flying, _company, _condition), maxLuggage(500) {}

long Airplane::MaxLuggage() const
{
	return maxLuggage;
}

/* -------------------------------------------------------------- */

AirFreighter::AirFreighter(): Airplane(), maxLuggage(1500), capacityOfLuggage(0) {}
AirFreighter::AirFreighter(bool _flying, string _company, Condition _condition) : 
	Airplane(_flying, _company, _condition), maxLuggage(500), capacityOfLuggage(0) {}

long AirFreighter::MaxLuggage() const
{
	return maxLuggage;
}

long AirFreighter::CapacityOfLuggage() const
{
	return capacityOfLuggage;
}

void AirFreighter::ChangeLuggage(long _luggage, Luggage type)
{
	if(capacityOfLuggage + _luggage > maxLuggage)
		capacityOfLuggage = maxLuggage;

	capacityOfLuggage = _luggage;
}

bool AirFreighter::IsEmpty() const
{
	return capacityOfLuggage == 0;
}

bool AirFreighter::IsFull() const
{
	return capacityOfLuggage == maxLuggage;
}