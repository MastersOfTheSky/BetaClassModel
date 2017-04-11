#include <iostream>
#include <string.h>
using namespace std;
class Aircraft{
public:
    Aircraft(bool _condition_aircraft,bool _condition_flight, double _fuel, char _company[30]);
    void Set_company(char _company[30]);
    double Get_fuel();

    private:
bool condition_aircraft;
bool condition_flight;
double fuel;
char company[30];

};
Aircraft::Aircraft(bool _condition_aircraft,bool _condition_flight, double _fuel, char _company[30]){
condition_flight=_condition_flight;
condition_aircraft=_condition_aircraft;
fuel=_fuel;
strcpy(company,_company);

}
double Aircraft::Get_fuel(){return fuel;}
void Aircraft::Set_company(char _company[30]){
    strcpy(company,_company);

}

class Plane : public Aircraft{

private:
    int max_storage_in_kg;
public: Plane(int _max_storage_in_kg,bool _condition_aircraft,bool _condition_flight, double _fuel, char _company[30]);
int get_storage();



};
Plane::Plane(int _max_storage_in_kg,bool _condition_aircraft,bool _condition_flight, double _fuel, char _company[30])
: Aircraft(_condition_aircraft,_condition_flight,_fuel,_company)  {
max_storage_in_kg=_max_storage_in_kg;

}


int Plane::get_storage(){
return max_storage_in_kg;
}

class Airliner: public Plane
{
private:
    int num_of_passengers;

public:
    Airliner(int _num_of_passengers,int _max_storage_in_kg,bool _condition_aircraft,bool _condition_flight, double _fuel, char _company[30]);
    int get_num_of_passengers();
    void set_num_of_passengers(int _num_of_passengers);


};
Airliner::Airliner(int _num_of_passengers,int _max_storage_in_kg,bool _condition_aircraft,bool _condition_flight, double _fuel, char _company[30]):Plane(_max_storage_in_kg,_condition_aircraft,_condition_flight,_fuel,_company)
{
    num_of_passengers=_num_of_passengers;


}
int Airliner::get_num_of_passengers()
{
    return num_of_passengers;
}
void Airliner::set_num_of_passengers(int _num_of_passengers){
num_of_passengers=_num_of_passengers;
}
int main()
{
    Airliner a(1000,true,true,200,241.2,"british airlines");
    cout<<a.Get_fuel()<<endl;

    return 0;

}





