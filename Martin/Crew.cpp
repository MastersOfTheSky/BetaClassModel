#include "Crew.hpp"
#include <iostream>

using namespace std;

Crew::Crew(People _position,char* _name,char* _lastName,double _experience)
{
	position=_position;
	for(int i=0;i<30;++i)
		name[i]=_name[i];
	for(int i=0;i<30;++i)
		lastName[i]=_lastName[i];
	experience=_experience;
}

const char* Crew::Position()const
{
	switch(position)
	{
		case Person::Pilot:return "Pilot";
		case Person::SecondPilot:return "Second Pilot";
		case Person::FlightAttendant:return"Flight Attendant";
	}
}

char* Crew::Get_Name()const
{
	return name;
}

char* Crew::Get_Last_Name()const
{
	return lastName;
}

double Crew::Experience()const
{
	return experience;
}

void Crew::Print()const
{
	cout <<"Position: "<<Position()<<endl;
	cout <<"Name: "<<Get_Name()<< "    Last name: "<<Get_Last_Name()<<endl;
	cout <<"Experience: "<<Experience()<<"years"<<endl;
}