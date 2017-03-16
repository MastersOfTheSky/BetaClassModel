#ifndef FLIGHT_HPP
#define FLIGHT_HPP

class Flight
{
    char destination[200];
    struct Date
    {
        int day;
        int month;
        int year;
    } dater;

    struct Time
    {
        int hours;
        int mins;
    } timer;
    int numberOfFlights;

public:
    Flight();
    Flight(char*, int, int, int, int, int, int);

    char* get_destination();
    int get_day() const;
    int get_month() const;
    int get_year() const;
    /*--*/ get_date() const;
    /*--*/ get_time();
    int get_hours() const;
    int get_mins() const;
    int get_number_of_identical_flights() const;

    void set_time(int, int);

    void printFlight() const;
};

#endif //FLIGHT_HPP


