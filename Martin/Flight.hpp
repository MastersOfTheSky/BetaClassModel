#ifndef FLIGHT_HPP
#define FLIGHT_HPP
#include "Airline.hpp"


class Flight
{
public:
	enum class Seat
	{
		Business,
		Economy
	};
	Flight(char*,day,month,year,hour,min);
	const char* Get_Destination()const;
	int Get_Day()const;
	int Get_Month()const;
	int Get_Year()const;
	int Get_Hour()const;
	int Get_Min()const;
	const char* Choose_Company();
	const char* Get_Seat()const;
	double Get_Price()const;
	void Print()const;

private:
	char destination[50];
	struct DateTime
	{
		int day;
		int month;
		int year;
		int hour;
		int min;
	}dataTime;
	Seat seat;
	double price;
};



#endif // !FLIGHT_HPP