#ifndef AIRFREIGHTER
#define AIRFREIGHTER

#include "Plane.hpp"

class AirFreighter : public Plane
{
public:
	AirFreighter(string, double, double, int, int, Condition, int, int);
	int MakeAFlight(string, int);
private:
	int maxLuggageWeight;
};

#endif // !AIRFREIGHTER
