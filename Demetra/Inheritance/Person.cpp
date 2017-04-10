#include <iostream>
#include "Person.hpp"

Person::Date::Date() : day(1), month(1), year(2001) {}

Person::Person() {}
Person::Person(string _name) : name(_name) {}
Person::Person(string _name, Date _date) : name(_name), birthdayDate(_date) {}

Person::Date Person::View_date() const
{
	return birthdayDate;
}

int Person::View_age() const
{
	return 2017 - birthdayDate.year;
}

string Person::View_name() const
{
	return name;
}

void Person::Set_birthday(int _day, int _month, int _year)
{
	birthdayDate.day = _day;
	birthdayDate.month = _month;
	birthdayDate.year = _year;
}

/* -------------------------------------------------------------- */

Worker::Worker(string _name) : name(_name) {}
Worker::Worker(string _name, Person::Date _date) : name(_name), birthdayDate(_date) {}
Worker::Worker(string _name, Profession _profession) : name(_name), profession(_profession) {}

string Worker::View_profession() const
{
	switch (profession)
	{
		case Profession::pilot: return "pilot"; break;
		case Profession::secondPilot: return "second pilot"; break;
		case Profession::airHostess: return "air hostess"; break;
	}
}

void Worker::Set_profession(Profession _profession)
{
	profession = _profession;
}

/* -------------------------------------------------------------- */

Student::Student(string _name): name(_name) {}
Student::Student(string _name, long _fn): name(_name), fN(_fn) {}
Student::Student(string _name, Person::Date _date): name(_name), birthday(_date) {}
Student::Student(string _name, Person::Date _date, long _fn): name(_name), fN(_fn), birthday(_date) {}

long Student::View_fN() const
{
	return fN;
}

void Student::Set_fN(long _fn)
{
	fN = _fn;
}