#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
using std::string;

enum Profession
{
	pilot,
	secondPilot,
	airHostess
};

class Person
{
public:
	struct Date
	{
		int day;
		int month;
		int year;

		Date();
	};
	Person();
	Person(string);
	Person(string, Date);
	
	virtual	Date View_date() const;
	virtual int View_age() const;
	virtual string View_name() const;

	virtual void Set_birthday(int, int, int);

private:
	string name;
	Date birthdayDate;
};

/* -------------------------------------------------------------- */

class Worker : public Person 
{
public:
	Worker(string);
	Worker(string, Date);
	Worker(string, Profession);
	
	string View_profession() const;

	void Set_profession(Profession);

private:
	string name;
	Date birthdayDate;
	Profession profession;
};

/* -------------------------------------------------------------- */

class Student : public Person
{
public:
	Student(string);
	Student(string, long);
	Student(string, Date);
	Student(string, Date, long);

	long View_fN() const;

	void Set_fN(long);

private:
	string name;
	Date birthday;
	long fN;
};


#endif // !PERSON_HPP
