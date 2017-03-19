#ifndef DISCOUNTS_H_INCLUDED
#define DISCOUNTS_H_INCLUDED
class Discounts
{
public:

    Discounts(double _price_for_kids, double _price_for_pensioners, double _price_for_groups, char _destination[20], double _low_price );

    double get_price_for_kids() const;
    double get_price_for_pensioners() const;
    double get_price_for_groups() const;
    char* get_destination();
    double get_low_price() const;

    void set_price_for_kids(double new_price_for_kids);
    void set_price_for_pensioners(double new_price_for_pensioners);
    void set_price_for_groups(double new_price_for_groups);
    void set_low_price(double new_low_price);
    void Printing();

private:

    double price_for_kids;
    double price_for_pensioners;
    double price_for_groups;
    char destination[20];
    double low_price;

};




#endif // DISCOUNTS_H_INCLUDED
