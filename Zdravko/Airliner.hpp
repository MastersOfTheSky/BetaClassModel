#ifndef AIRLINER
#define AIRLINER

#include "Plane.hpp"

class Airliner : public Plane
{
public:
	Airliner(string, double, double, int, int, Condition, int, int);
	int Get_number_of_safety_boats();
	void ActivateSafeMode();
	int MakeAFlight(string destination, double distance);

private:
	int numberOfSafetyBoats;
	bool areBoatsActivated;
	bool areSafetyBeltsActivated;
};

#endif // !AIRLINER
