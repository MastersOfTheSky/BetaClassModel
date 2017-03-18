#ifndef CREW_HPP
#define CREW_HPP

class Crew
{
public:
    enum class position
    {
        pilot,
        assistantPilot,
        airHostess
    };

    Crew();
    Crew(char*, char*, position, double);

    char* Get_name_of_the_company();
    char* Get_name_of_the_human();
    char* Get_position();
    double Get_experience();

    void Set_position(position);

    void Change_working_company(char*);

    void PrintCrew();

private:
    char humanName[200];
    char workingCompany[200];
    position profession;
    double experience; ///years
};

#endif //CREW_HPP


