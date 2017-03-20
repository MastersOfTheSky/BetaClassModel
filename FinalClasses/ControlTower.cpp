#include "ControlTower.hpp"

using namespace std;


ControlTower::ControlTower(string _radioCode, int _frequency, int _numberOfEmployees)
	: radioCode(_radioCode), frequency(_frequency),
		numberOfEmployees(_numberOfEmployees), capacityOfServicablePlanes(numberOfEmployees * 2)
{
}
string ControlTower::Get_radioCode() const
{
	return radioCode;
}
int ControlTower::Get_frequency() const
{
	return frequency;
}
int ControlTower::Get_numberOfEmployees() const
{
	return numberOfEmployees;
}
;



int ControlTower::Get_capacityOfServicablePlanes() const
{
    return capacityOfServicablePlanes;
}
