#ifndef PERSON
#define PERSON
#include <string>
#include <iostream>

using std::string;

enum Gender
{
	male, female
};

class Person
{
public:
	Person(string, int, Gender, int);
	string Get_full_name();
	int Get_age();
	Gender Get_gender();
	int Get_flights();

private:
	int flights;
	string fullName;
	int age;
	Gender gender;
};

#endif // !PERSON
