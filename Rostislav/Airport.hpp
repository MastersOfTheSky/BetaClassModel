#ifndef AIRPORT_HPP
#define AIRPORT_HPP

class Airport
{
public:

   Airport(char* city, char* country, char* name, int numberOfTerminals, int maxCapacity);

   char* get_city() const;
   char* get_country() const;
   char* get_name() const;
   int get_numberOfTerminals() const;
   int get_maxCapacity() const;
   void print() const;

private:

    char* _city;
    char* _country;
    char* _name;
    int _numberOfTerminals;
    int _maxCapacity;

};

#endif // CLASS3_HPP
