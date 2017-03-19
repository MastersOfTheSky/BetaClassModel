#ifndef MACHINE_HPP
#define MACHINE_HPP
#include "Airline.hpp"

class Machine 
{
public:
	enum class FlyingWith
	{
		Plane,
		Helicopter
	};
	Machine(FlyingWith,char*,char*,int);
	const char* Choose_Flying_Machine()const;
	char* Get_Name()const;
	char* Get_Company()const;
	int Max_People_On_Board()const;
	void Print();



private:
	FlyingWith flyingMachine;
	char name[20];
	char company[30];
	int maxNumberPeople;

};


#endif // MACHINE_HPP