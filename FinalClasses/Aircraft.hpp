#ifndef AIRCRAFT
#define AIRCRAFT
#include <string>

using std::string;

enum Condition
{
	good, 
	average, 
	outOfOrder
};

class Aircraft
{
public:
	Aircraft(string, double, double, int, int, Condition);
	Condition Get_condition();
	void Set_condition(Condition);
	double Get_max_speed();
	double Get_max_flying_distance();
	int Get_max_amount_passengers();
	int Get_crew_amount();
	string Get_owner_company();
	void Set_owner(string);
	virtual double MakeAFlight(string destination, double distance);

private:
	Condition condition;
	double maxFlyingDistance;
	double maxSpeedPerHourInKm;
	int amountOfMaxPassengers;
	int amountOfNeededCrew;
	string ownerCompany;
};

#endif // !AIRCRAFT
