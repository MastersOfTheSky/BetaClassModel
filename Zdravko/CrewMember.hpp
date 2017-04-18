#ifndef CREW_MEMBER
#define CREW_MEMBER

enum Position
{
	pilot,
	assistantPilot,
	airHostess
};

#include "Person.hpp"

class CrewMember : public Person
{
public:
	CrewMember(string, int, Gender, int, string, Position);
	string Get_working_company();
	Position Get_position();
private:
	string workingCompany;
	Position position;
};


#endif // !CREW_MEMBER
