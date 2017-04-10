#include <iostream>
using std::endl;
using std::cin;
using std::cout;

class Ticket
{
public:
virtual double getPrice()const
{
	return price;
}
virtual int getNumTicket()const
{
	return numTicket;
}
virtual bool includingLuggage()const
{
	return luggage;
}
virtual bool includingExtraBonus()const
{
	return 0;
}
private:
	double price;
	int numTicket;
	bool luggage;
	bool extraBonus;
};

class Economy : public Ticket
{
public:
	Economy(double _price, unsigned long int _numTicket, bool _luggage)
		:price(_price), numTicket(_numTicket), luggage(_luggage) {}
double getPrice()const
{
	return price;
}
int getNumTicket()const
{
	return numTicket;
}
bool includingLuggage()const
{
	return luggage;
}
private:
double price;
unsigned long int numTicket;
bool luggage;
};

class Business : public Ticket
{
public:
Business(double _price, unsigned long int _numTicket, bool _luggage)
	:price(_price), numTicket(_numTicket), luggage(_luggage) {}
double getPrice()const
{
	return price;
}
int getNumTicket()const
{
	return numTicket;
}
bool includingLuggage()const
{
	return luggage;
}
bool includingExtraBonus()const
{
	return 1;
}
private:
double price;
unsigned long int numTicket;
bool luggage;
};

class FirstClass : public Ticket
{
public:
	FirstClass(double _price, unsigned long int _numTicket, bool _luggage)
		:price(_price), numTicket(_numTicket), luggage(_luggage) {}
	double getPrice()const
	{
		return price;
	}
	int getNumTicket()const
	{
		return numTicket;
	}
	bool includingLuggage()const
	{
		return luggage;
	}
	bool includingExtraBonus()const
	{
		return 1;
	}
private:
	double price;
	unsigned long int numTicket;
	bool luggage;
};
/*
int main()
{
	Economy e(115.89, 458956, 0);
	Business b(450.23, 458956, 1);
	FirstClass f(1250.56, 45125678, 1);
	Ticket *t1 = &e;
	Ticket *t2 = &b;
	Ticket *t3 = &f;
	cout << "Is there extra bonus in Economy class? " << t1->includingExtraBonus() << endl;
	cout << "Is there extra bonus in Business class? " << t2->includingExtraBonus() << endl;

	return 0;
}
*/