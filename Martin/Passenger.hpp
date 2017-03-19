#ifndef PASSENGER_HPP
#define PASSENGER_HPP

class Passenger
{
public:
	Passenger(char*, char*, char*, char*, int, int, int, char, char*);

	void Get_Name() const;
	void Get_Surname() const;
	void Get_Last_Name() const;
	void Get_Nationality() const;
	int Get_Day() const;
	int Get_Month() const;
	int Get_Year() const;
	char Get_Gender() const;
	void Set_Destination();
	void Print_Date_Of_Birth();

private:
	char name[30];
	char surname[30];
	char lastName[30];
	char nationality[20];
	struct DateOfBirth 
	{
		int day;
		int month;
		int year;
	}date;
	
	char gender;
	char destination[50];
};



#endif // !PASSENGER_HPP
