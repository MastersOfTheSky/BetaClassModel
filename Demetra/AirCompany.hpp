#ifndef AIR_COMPANY_HPP
#define AIR_COMPANY_HPP

class AirCompany
{
public:
    AirCompany();
    AirCompany(char*, int, int);

    char* Get_company_name();
    int Get_number_of_flying_machines();
    int Get_active_flights();

    void Set_number_of_machines(int); ///add new machine
    void Set_active_flights(Flight);

    void PrintCompany();

private:
    char companyName[100];
    int numberOfFlyingMachines;
    int activeFlightsOnTheMoment;
};

#endif // AIR_COMPANY_HPP
