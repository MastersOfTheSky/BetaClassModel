#ifndef AIRLINE_HPP
#define AIRLINE_HPP

class Airlines
{
public:
	
	enum class Name
	{
		Emirates,
		QatarAirways,
		SingaporeAirlines,
		EtihadAirways,
		TurkishAirlines,
		Lufthansa,
		BritishAirways,
		Ryanair,
		WizzAir,
		BulgariaAir
	};

	Airlines(Name);
	const char* Get_Name();
	const char* Get_Origin() const;
	const char* Get_Data_Of_Origin() const;
	int Number_Planes() const;
	int World_Rating() const;
	void Print() const;

private:
	Name name;
};


#endif // !AIRLINE_HPP
