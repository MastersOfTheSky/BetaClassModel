#ifndef PLANE
#define PLANE
#include "Aircraft.hpp"

class Plane : public Aircraft
{
public:
	Plane(string, double, double, int, int, Condition, int);
	int Get_wingSpan();

private:
	int wingSpan;
};

#endif // !PLANE
