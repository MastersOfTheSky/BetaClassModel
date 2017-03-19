#ifndef TICKETS_H_INCLUDED
#define TICKETS_H_INCLUDED
class Ticket
{
public:

    enum class Kind
    {
    adult,
    kid,
    pensioner
    };

   Ticket(double _price,char _destination[30],Kind _status,int _seat,char _date_time[20],char _terminal[4]);

    double get_price() const;
    char* get_destination() ;
    int get_seat() const;
    char* get_date_time() ;
    char* get_terminal();
    const char* get_type_of_ticket() const;

    void set_price(double new_price);
    void set_date_time(char new_date_time[20]);
    void Printing();
private:

    double price;
    char destination[30];
    Kind status;
    int seat;
    char date_time[20];
    char terminal[4];

};


#endif // TICKETS_H_INCLUDED
