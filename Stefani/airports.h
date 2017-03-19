#ifndef AIRPORTS_H_INCLUDED
#define AIRPORTS_H_INCLUDED
class Airports
{
public:

    enum Type
    {
        military,
        international,
        airfields

    };
    Airports(char _name[30],char _location[20],int _number_of_terminals,Type _status);

    char* get_name();
    char* get_location();
    int get_number_of_terminals()const;
    const char* get_type_of_airport() const;

    void Printing();

private:

    char name[30];
    char location[20];
    int number_of_terminals;
    Type status;

};


#endif // AIRPORTS_H_INCLUDED
