#include "passenger.hpp"
#include <iostream>

using namespace std;

Passenger::Passenger(char* _name, char* _surname, char* _lastName, char* _nationality, int _day, int _month, int _year,char _gender, char* _destination)
{
	for (int i = 0; i  <30; ++i)
		name[i] = _name[i];
	for (int i = 0; i < 30; ++i)
		surname[i] = _surname[i]; 
	for (int i = 0; i < 30; ++i)
		lastName[i] = _lastName[i];
	for (int i = 0; i < 20; ++i)
		nationality[i] = _nationality[i];
	date.day = _day;
	date.month = _month;
	date.year = _year;
	gender = _gender;
	for (int i = 0; i < 50; ++i)
		destination[i] = _destination[i];
}

void Passenger::Get_Name() const
{
	cout << "Enter your name: ";
	for (int i = 0; i < 30; ++i)
		cout << name[i];
	cout << endl;
}

void Passenger::Get_Surname() const
{
	cout << "Please enter your surname: ";
	for (int i = 0; i < 30; ++i)
		cout << surname[i];
	cout << endl;
}

void Passenger::Get_Last_Name() const
{
	cout << "Please enter your last name: ";
	for (int i = 0; i < 30; ++i)
		cout << lastName[i];
	cout << endl;
}

void Passenger::Get_Nationality() const
{
	cout << "Your nationality: ";
	for (int i = 0; i < 20; ++i)
		cout << nationality[i];
	cout << endl;
}

int Passenger::Get_Day() const
{
	return date.day;
}

int Passenger::Get_Month() const
{
	return date.month;
}

int Passenger::Get_Year() const
{
	return date.year;
}

char Passenger::Get_Gender() const
{
	return gender;
}

void Passenger::Print_Date_Of_Birth()
{
	cout << "Your date of birth:" << endl;
	cout << "Day: " << date.day << "    " << "Month: " << date.month << "    " << "Year: " << date.year << endl;
	cout << "Gender: " << gender << endl;
}

void Passenger::Set_Destination()
{
	cout << "Where would you like to travel ?: ";
	for (int i = 0; i < 50; ++i)
		cout << destination[i];
	cout << endl;
}
