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

	virtual bool IsFlying() const;
	virtual long CapacityofFuel() const;
	virtual long CapacityOfPeople() const;
	virtual long CapacityofFuelLeft() const;
	virtual long MaxCapacityOfPeople() const;
	virtual bool IsInProperCondition() const;
	virtual string OwnerCompany() const;

	virtual void ChangeCapacityOfPeople(long);
	virtual void AddNewPeople(long);
	virtual void ChangeCapacityOfFuel(long);
	virtual void ChangeFlyingStatus(bool);
	virtual void ChangeCondition(Condition);

private:
	bool flying;
	long maxCapacityOfFuel;
	long maxCapacityOfPeople;
	long capacityOfPeople;
	long capacityOfFuel;
	Condition condition;
	string company;

//	void CopyFrom(const Aircraft&);
//	void Clear();
};

/* -------------------------------------------------------------- */
 
class Helicopter : public Aircraft
{
public:
	Helicopter();
	Helicopter(bool, string, Condition, Purpose);
	//Helicopter(const Helicopter&);

	string ViewPurpose() const;
	long CapacityOfPeople() const override;
	long MaxCapacityOfPeople() const override;
	void AddNewPeople(long) override;
	void ChangePurpose(Purpose);

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

	virtual long MaxLuggage() const;

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

	long MaxLuggage() const override;
	long CapacityOfLuggage() const;
	void ChangeLuggage(long, Luggage);
	bool IsEmpty() const;
	bool IsFull() const;

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