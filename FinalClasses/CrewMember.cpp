#include "stdafx.h"
#include "CrewMember.hpp"

CrewMember::CrewMember(string _fullName, int _age, Gender _gender, int _flights, string _workingCompany, Position _position)
	: Person(_fullName, _age, _gender, _flights), workingCompany(_workingCompany), position(_position)
{
}

string CrewMember::Get_working_company()
{
	return workingCompany;
}

Position CrewMember::Get_position()
{
	return position;
}
