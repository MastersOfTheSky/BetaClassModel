#ifndef AIRCRAFT_HPP
#define AIRCRAFT_HPP

using std::string;

enum Luggage
{
	suitcases,
	handbags,
	heavyLuggage
};

enum Condition
{
	good,
	bad
};

enum Purpose
{
	rescue,
	policeForces,
	reports,
	transportObjects,
	transportPeople,
	none
};

// at this moment, there is no need to do a copy constructor and operator = as well as destructor, because we are not dealing with operators new 
// and delete and with dynamic memory. 

class Aircraft
{
public:	
	Aircraft();
	Aircraft(bool, string, Condition);
	//Aircraft(const Aircraft&);
	//Aircraft& operator =(const Aircraft&);
	//	~Aircraft();

	virtual bool Is_flying() const;
	virtual long Capacity_of_fuel() const;
	virtual long Capacity_of_people() const;
	virtual long Capacity_of_fuel_left() const;
	virtual long Max_capacity_of_people() const;
	virtual bool Is_in_proper_condition() const;
	virtual string Owner_company() const;

	virtual void Change_capacity_of_people(long);
	virtual void Add_new_people(long);
	virtual void Change_capacity_of_fuel(long);
	virtual void Change_flying_status(bool);
	virtual void Change_condition(Condition);

private:
	bool flying;
	long maxCapacityOfFuel;
	long maxCapacityOfPeople;
	long capacityOfPeople;
	long capacityOfFuel;
	Condition condition;
	string company;

//	void Copy_from(const Aircraft&);
//	void Clear();
};

/* -------------------------------------------------------------- */
 
class Helicopter : public Aircraft
{
public:
	Helicopter();
	Helicopter(bool, string, Condition, Purpose);
	//Helicopter(const Helicopter&);

	string View_purpose() const;
	long Capacity_of_people() const;
	long Max_capacity_of_people() const;
	void Add_new_people(long);
	void Change_purpose(Purpose);

private:
	bool flying;
	long maxCapacityOfFuel;
	long maxCapacityOfPeople;
	long capacityOfPeople;
	long capacityOfFuel;
	Condition condition;
	string company;
	Purpose purpose;
};

/* -------------------------------------------------------------- */

class Airplane : public Aircraft
{
public:
	Airplane();
	Airplane(bool, string, Condition);
	//Airplane(const Airplane&);

	virtual long Max_luggage() const;

private:
	long maxLuggage;
	bool flying;
	long maxCapacityOfFuel;
	long maxCapacityOfPeople;
	long capacityOfPeople;
	long capacityOfFuel;
	Condition condition;
	string company;
};

/* -------------------------------------------------------------- */

class AirFreighter : public Airplane
{
public:
	AirFreighter();
	AirFreighter(bool, string, Condition);
//	AirFreighter(const AirFreighter&);

	long Max_luggage() const override;
	long Capacity_of_luggage() const;
	void Change_luggage(long, Luggage);
	bool Is_empty() const;
	bool Is_full() const;

private:
	long capacityOfLuggage;
	long maxLuggage;
	bool flying;
	long maxCapacityOfFuel;
	long maxCapacityOfPeople;
	long capacityOfPeople;
	long capacityOfFuel;
	Condition condition;
	string company;
};

#endif // !AIRCRAFT_HPP