#ifndef PASSENGER_HPP
#define PASSENGER_HPP

class Passenger
{

public:

    enum Location
    {
        Business,
        Economy,
        Vip
    };

    Passenger(Location clas_s, char* firstName, char* secondName, int seat, int terminal, float time_of_departure);

    const char* get_location() const;
    int get_seat() const;
    int get_terminal() const;
    float get_time() const;
    char* get_firstName() const;
    char* get_secondName() const;
    void print() const;

private:

    Location _clas_s;
    char* _firstName;
    char* _secondName;
    int _seat;
    int _terminal;
    float _time_of_departure;

};
#endif // CLASS2
