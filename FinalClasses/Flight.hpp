#ifndef FLIGHT_HPP
#define FLIGHT_HPP

#include <string>
#include <iostream>
#include <vector>
#include "Passenger.hpp"
#include "Airliner.hpp"

using namespace std;

struct DateTime
{
	int day;
	int month;
	int year;
};

class Flight
{
public:
	Flight(string, string, DateTime, DateTime, Airliner);
	string Get_company();
	string Get_destination();
	DateTime Get_flyOf_time();
	void Set_flyOf_time(DateTime time);
	DateTime Get_landing_time();
	void Set_landing_time(DateTime time);
	void AddPassenger(Passenger passenger);
	Airliner Get_airliner();
	void Set_airliner(Airliner airliner);

private:
	string airCompanyName;
	string destination;
	DateTime flyOfTime;
	DateTime landingTime;
	vector<Passenger> passengers;
	Airliner airPlane;
};

#endif //FLIGHT_HPP



