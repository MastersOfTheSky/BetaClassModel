#ifndef AIRPLANE_HPP
#define AIRPLANE_HPP

class Airplane
{
public:

    Airplane(char* planeCode, char* companyName, int capacity, float timeOfArrival, float timeOfDeparture);

    char* get_planeCode() const;
    char* get_companyName() const;
    int get_capacity() const;
    float get_timeOfArrival() const;
    float get_timeOfDeparture() const;
    void print() const;

private:
    char* _planeCode;
    char* _companyName;
    int _capacity;
    float _timeOfArrival;
    float _timeOfDeparture;
};

#endif // CLASS4_HPP
