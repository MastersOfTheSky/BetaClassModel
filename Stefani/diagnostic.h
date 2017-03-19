#ifndef DIAGNOSTIC_H_INCLUDED
#define DIAGNOSTIC_H_INCLUDED
class Diagnostic
{
public:
    enum class TypeOfAircraft
    {
    airplane,
    helicopter,
    other
    };
   Diagnostic(TypeOfAircraft _aircraft, char _date_of_last_check [20], char _found_problems [500], bool _out_of_order);
   const char* get_type_of_aircraft() const;
   char* get_date_of_last_check();
   char* get_found_problems();
   bool get_out_of_order() const;

    void Printing();
private:

    TypeOfAircraft aircraft;
    char date_of_last_check [20];
    char found_problems [500];
    bool out_of_order;


};




#endif // DIAGNOSTIC_H_INCLUDED
