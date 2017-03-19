#include "airline.hpp"
#include <iostream>

using namespace std;

Airlines::Airlines(Name _name)
{
	name = _name;
}

const char* Airlines::Get_Name() 
{
	switch (name)
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

const char* Airlines::Get_Origin()const
{
	switch (name)
	{
	case Name::Emirates:return "Dubai";
	case Name::QatarAirways:return "Qatar";
	case Name::SingaporeAirlines:return "Singapore";
	case Name::EtihadAirways:return "Abu Dhabi";
	case Name::TurkishAirlines:return "Turkey";
	case Name::Lufthansa:return "Germany";
	case Name::BritishAirways:return "United Kingdom";
	case Name::Ryanair:return "Ireland";
	case Name::WizzAir:return "Hungary";
	case Name::BulgariaAir:return "Bulgaria";
	default: return "There is no such company!";
	}
}

const char* Airlines::Get_Data_Of_Origin() const
{
	switch (name)
	{
	case Name::Emirates:return "Date:25    Month:March    Year:1985";
	case Name::QatarAirways:return "Date:22    Month:November    Year:1993";
	case Name::SingaporeAirlines:return "Date:28    Month:January    Year:1972";
	case Name::EtihadAirways:return "Date:10    Month:July    Year:2003";
	case Name::TurkishAirlines:return "Date:20    Month:May    Year:1933";
	case Name::Lufthansa:return "Date:06    Month:January    Year:1953";
	case Name::BritishAirways:return "Date:31    Month:March    Year:1974";
	case Name::Ryanair:return "Date:14    Month:September    Year:1985";
	case Name::WizzAir:return "Date:10    Month:September    Year:2003";
	case Name::BulgariaAir:return "Date:15    Month:November    Year:2003";
	default: return "There is no such company!";
	}
}

int Airlines::Number_Planes() const
{
	switch (name)
	{
	case Name::Emirates:return 5;
	case Name::QatarAirways:return 3;
	case Name::SingaporeAirlines:return 2;
	case Name::EtihadAirways:return 4;
	case Name::TurkishAirlines:return 1;
	case Name::Lufthansa:return 6;
	case Name::BritishAirways:return 5;
	case Name::Ryanair:return 3;
	case Name::WizzAir:return 3;
	case Name::BulgariaAir:return 10;
	default: return 1;
	}
}

int Airlines::World_Rating() const
{
	switch (name)
	{
	case Name::Emirates:return 1;
	case Name::QatarAirways:return 2;
	case Name::SingaporeAirlines:return 3;
	case Name::EtihadAirways:return 6;
	case Name::TurkishAirlines:return 10;
	case Name::Lufthansa:return 25;
	case Name::BritishAirways:return 9;
	case Name::Ryanair:return 59;
	case Name::WizzAir:return 56;
	case Name::BulgariaAir:return 19;
	default: return 10;
	}
}


void Airlines::Print() const
{
	cout << "Name: " << Get_Name << endl;
	cout << "Origin: " << Get_Origin << endl;
	cout << Get_Data_Of_Origin << endl;
	cout << "Planes in the airport: " << Number_Planes << endl;
	cout << "World ¹" << World_Rating << " airline" << endl;
}