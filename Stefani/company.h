#ifndef COMPANY_H_INCLUDED
#define COMPANY_H_INCLUDED
class Company
{

public:

    Company(char _name[30],char _location_of_the_company[100],int _number_of_planes,char _destinations [500]);

    char* get_name();
    char* get_location_of_the_company();
    int get_number_of_planes()const;
    char* get_destinations();

    void Printing();

private:

    char name[30];
    char location_of_the_company[100];
    int number_of_planes;
    char destinations [500];

};


#endif // COMPANY_H_INCLUDED
