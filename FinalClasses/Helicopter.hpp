#ifndef HELICOPTER
#define HELICOPTER

#include "Aircraft.hpp"

class Helicopter : public Aircraft
{
public:
	Helicopter(string, double, double, int, int, Condition, bool);
	bool Has_doors();
private:
	bool hasDoors;
};

#endif // !HELICOPTER
