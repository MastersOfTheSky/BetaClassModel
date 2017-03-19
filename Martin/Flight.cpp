#include "Flight.hpp"
#include <iostream>

using namespace std;

Flight::Flight(char* _destination,int _day,int _month, int _year,int _hour, int _min, Seat _seat, double _price)
{
	for (int i=0;i<50;i++)
		destination[i]=_destination[i];
		dataTime.day=_day;
		dataTime.month=_month;
		dataTime.year=_year;
		dataTime.hour=_hour;
		dataTime.min=_min;
		seat=_seat;
		price=_price;
}

const char* Flight::Get_Destination()const
{
	return destination;
}

int Flight::Get_Day() const
{
	return dataTime.day;
}

int Flight::Get_Month()const
{
	return dataTime.month;
}

int Flight::Get_Year()const
{
	return dataTime.year;
}

int Flight::Get_Hour()const
{
	return dataTime.hour;
}

int Flight::Get_Min()const
{
	return dataTime.min;
}

const char* Get_Seat()const
{
	switch (seat)
	{
		case Seat::Business: return "Business";
		case Seat::Economy:return "Economy";
	}
}

double Flight::Get_Price()const
{
	return price;
}

const char* Flight::Choose_Company()
{
	Name company
	switch (company)
	{
	case Name::Emirates:return "Emirates";
	case Name::QatarAirways:return "Qatar Airways";
	case Name::SingaporeAirlines:return "Singapore Airlines";
	case Name::EtihadAirways:return "Etihad Airways";
	case Name::TurkishAirlines:return "Turkish Airlines";
	case Name::Lufthansa:return "Lufthansa";
	case Name::BritishAirways:return "British Airways";
	case Name::Ryanair:return "Ryanair";
	case Name::WizzAir:return "Wizz Air";
	case Name::BulgariaAir:return "Bulgaria Air";
	default: return "There is no such company!";
	}
}

void Flight::Print()const
{
	cout <<"Please enter destination: "<<Get_Destination<<endl;
	cout <<"<Day: "<<Get_Day()<<"    "<<"Month: "<<Get_Month()<<"    "<<"Year: "<<Get_Year()<<endl;
	cout <<"Time: "<<Get_Hour()<<"/"<<Get_Min()<<endl;
	cout <<"Choose class: "<<Get_Seat()<<endl;
	cout << "Choose airline: "<<Choose_Company()<<endl;
	cout << "Total price: "<<Get_Price()<<endl;
}