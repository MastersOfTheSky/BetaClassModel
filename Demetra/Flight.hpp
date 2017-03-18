#ifndef FLIGHT_HPP
#define FLIGHT_HPP

class Flight
{
public:
    Flight();
    Flight(char*, char*, int, int, int, int, int, int, double);

    char* Get_company_name();
    char* Get_destination();
    int Get_day() const;
    int Get_month() const;
    int Get_year() const;
    int Get_hours() const;
    int Get_mins() const;
    int Get_number_of_identical_flights() const;
    double Get_ticketPrice() const;

    void Set_time(int, int);

    void Print_flight() const;

    void Cancel_this_flight();
    void Cancel_flight(Flight);

private:
    char airCompanyName[100];
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
    double ticketPrice;
};

#endif //FLIGHT_HPP



