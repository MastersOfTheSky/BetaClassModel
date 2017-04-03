#ifndef PASSENGER
#define PASSENGER

#include "Person.hpp"

enum LuggageType
{
	cabin, nonCabin
};

enum PassengerType
{
	ordinary, 
	vip
};

class Passenger : public Person
{
public:
	Passenger(string, int, Gender, int, string, PassengerType, LuggageType);
	PassengerType Get_type();
	void Set_type(PassengerType type);
	string Get_seat();
	void Set_seat(string seat);
	LuggageType Get_luggage_type();
	void Set_luggage_type(LuggageType type);
private:
	string seat;
	PassengerType type;
	LuggageType luggage;
};

#endif // !PASSENGER
