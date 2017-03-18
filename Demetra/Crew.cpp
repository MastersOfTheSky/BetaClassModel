#include "Crew.hpp"
#include <iostream>
#include <string.h>

using namespace std;

Crew::Crew()
{
    strcpy(humanName, "Name here");
    strcpy(workingCompany, "Company name here");
    profession = position::airHostess;
    experience = 0;
}

Crew::Crew(char* _humanName, char* _workingCompany, position _profession, double _experience)
{
    strcpy(humanName, _humanName);
    strcpy(workingCompany, _workingCompany);
    profession = _profession;
    experience = _experience;
}

char* Crew::Get_name_of_the_company()
{
    return workingCompany;
}

char* Crew::Get_name_of_the_human()
{
    return humanName;
}

char* Crew::Get_position()
{
    switch (profession)
    {
        case position::pilot : return "pilot";
        case position::assistantPilot : return "assistantPilot";
        case position::airHostess : return "air hostess";
    }
}

double Crew::Get_experience()
{
    return experience;
}

void Crew::Set_position(position _newPosition)
{
    profession = _newPosition;
}

void Crew::Change_working_company(char* _newCompany)
{
    strcpy(workingCompany, _newCompany);
    experience = 0;
}

void Crew::PrintCrew()
{
    cout<< humanName << "works in "
        << workingCompany << " company as "
        << Get_position() << "\nThe person has worked in the company for "
        << experience << "years." <<endl;
}
