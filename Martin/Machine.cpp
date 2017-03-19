#include "Machine.hpp" 
#include<iostream>

using namespace std;

Machine::Machine(FlyingWith _flyingMachine,char* _name,char* _company, int _maxNumberPeople)
{
	flyingMachine=_flyingMachine;
	for(int i=0;i<20;++i)
		name[i]=_name[i];
	for(int i=0;i<30;++i)
		company[i]=_company[i];
	maxNumberPeople=_maxNumberPeople;
}

const char* Machine::Choose_Flying_Machine()const
{
	switch(flyingMachine)
	{
		case FlyingWith::Plane: return"Plane";
		case FlyingWith::Helicopter: return "Helicopter";
		default: return"There is no such machine.";
	}
}

char* Machine::Get_Name()const
{
	return name;
}

char* Machine::Get_Company()const
{
	Name company;
	switch (company)
	{
	case Name::Emirates:return "Emirates";
	case Name::QatarAirways:return "Qatar Airways";
	case Name::SingaporeAirlines:return "Singapore Airlines";
	case Name::EtihadAirways:return "Etihad Airways";
	case Name::TurkishAirlines:return "Turkish Airlines";
	case Name::Lufthansa:return "Lufthansa";
	case Name::BritishAirways:return "British Airways";
	case Name::Ryanair:return "Ryanair";
	case Name::WizzAir:return "Wizz Air";
	case Name::BulgariaAir:return "Bulgaria Air";
	default: return "There is no such company!";
	}
}

int Machine::Max_People_On_Board()const
{
	return maxNumberPeople;
}

void Machine::Print()
{
	cout << "Enter a flying machine: "<<Choose_Flying_Machine()<<endl;
	cout << "Name: "<<Get_Name()<<endl;
	cout << "Company: "<<Get_Company()<<endl;
	cout << "Max people on board: "<<Max_People_On_Board()<<endl;
}