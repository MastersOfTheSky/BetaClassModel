#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Animal
{
public:
	virtual void print()const
	{
		cout << "Animal class called!!" << endl;
	}
};

class Lion : public Animal
{
public:
	Lion()
	{
		cout << "Class lion called !!" << endl;
	}
	void print()const
	{
		cout << "Animal: Lion" << endl;
		cout << "Origin: Africa" << endl;
		cout << "Weight: 250 kg" << endl;
		cout << "Height: 1.94m" << endl;
		cout << "Residence: Africa, Asia, South America" << endl;
	}
private:
	char name[50];
	char origin[50];
	double weigth;
	double height;
	char livingPlace[50];
};
class Tiger :public Animal
{
public:
	Tiger()
	{
		cout << "Class tiger called !!" << endl;
	}
	void print()const
	{
		cout << "Animal: Tiger" << endl;
		cout << "Origin: Africa" << endl;
		cout << "Weight: 160 kg" << endl;
		cout << "Height: 1.82m" << endl;
		cout << "Residence: Africa, Asia, South America" << endl;
	}
private:
	char name[50];
	char origin[50];
	double weigth;
	double height;
	char livingPlace[50];
};
/*
int main()
{
	Lion lion;
	Animal *a1 = &lion;
	a1->print();
	Tiger tiger;
	Animal *a2 = &tiger;
	a2->print();
	
	return 0;
}
*/