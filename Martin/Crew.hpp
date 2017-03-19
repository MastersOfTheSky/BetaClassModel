#ifndef CREW_HPP
#define CREW_HPP

class Crew
{
public:
	enum class Person
	{
		Pilot,
		SecondPilot
		FlightAttendant,
	}
	Crew(Person,char*,char*,double);
	const char* Position()const;
	char* Get_Name()const;
	char* Get_Last_Name()const;
	double Experience()const;
	void Print();


private:
	Person position;
	char name[30];
	char lastName[30];
	double experience;
};


#endif //!CREW_HPP