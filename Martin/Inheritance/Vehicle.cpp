#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Vehicle
{
public:
	virtual  double getCapacity()const
	{
		return capacity;
	}
	virtual double getExpense()const
	{
		return expense;
	}
	virtual double getNumPassengers()const
	{
		return numPassengers;
	}
	virtual double getMaxSpeed()const
	{
		return 500;				//Testing if in one class doesn't exist this method
	}
	virtual double getHorsepower()const
	{
		return horsepower;
	}
private:
	double capacity;
	double expense;				//per 100km
	int numPassengers;
	double maxSpeed;
	int horsepower;
};

class Car : public Vehicle
{
public:
	Car(double _capacity, double _expense, int _numPassengers, double _maxSpeed, int _horsepowers)
		:capacity(_capacity), expense(_expense), numPassengers(_numPassengers), maxSpeed(_maxSpeed), horsepowers(_horsepowers)
	{}
	double getCapacity()const
	{
		return capacity;
	}
	double getExpense()const
	{
		return expense;
	}
	double getNumPassengers()const
	{
		return numPassengers;
	}
	double getMaxSpeed()const
	{
		return maxSpeed;
	}
	double setNewMaxSpeed(double newSpeed)
	{
		return newSpeed;
	}
	double getHorsepower()const
	{
		return horsepowers;
	}
	/*
	void print()const
	{
		cout << "Type vehicle: Car" << endl;
		cout << "Expense per 100km: " << getExpense()<<"l" << endl;
		cout << "Total capacity: " << getCapacity() << "l" << endl;
		cout << "Maximum speed: " << getMaxSpeed() << "km/h" << endl;
		cout << "Maximum number of passengers: " << getNumPassengers() << endl;
		cout << "Horsepowers: " << getHorsepower() << endl;
	}
	*/
private:
	double capacity;
	double expense;				
	int numPassengers;
	double maxSpeed;
	int horsepowers;
};

class Truck: public Vehicle
{
public:
	Truck(double _capacity, double _expense, int _numPassengers, double _maxSpeed, int _horsepowers)
		:capacity(_capacity), expense(_expense), numPassengers(_numPassengers), maxSpeed(_maxSpeed), horsepowers(_horsepowers)
	{}
	double getCapacity()const
	{
		return capacity;
	}
	double getExpense()const
	{
		return expense;
	}
	double getNumPassengers()const
	{
		return numPassengers;
	}
	//double getMaxSpeed()const
	//{
		//return maxSpeed;
	//}
	double setNewMaxSpeed(double newSpeed)
	{
		return newSpeed;
	}
	double getHorsepower()const
	{
		return horsepowers;
	}
private:
	double capacity;
	double expense;
	int numPassengers;
	double maxSpeed;
	int horsepowers;
};

int main()
{
	Car car(53.6, 12.09, 7, 250, 180);
	Truck truck(115.5, 40.06, 3, 180, 450);
	Vehicle *v1 = &car;
	Vehicle *v2 = &truck;
	Vehicle v3;
	cout << "NumPassenger in car: " << v1->getNumPassengers() << endl;
	cout << "Max Speed truck: " << v2->getMaxSpeed() << endl;
	cout << "Horsepower truck: " << v2->getHorsepower()<<endl;
	cout << "Max speed vehicle: " << v3.getMaxSpeed() << endl;
	return 0;
}
