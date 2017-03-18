#ifndef CONTROLTOWER_HPP
#define CONTROLTOWER_HPP

class ControlTower
{
public:

    ControlTower(char* radioCode, int frequency, int numberOfEmployees);

    char* get_radioCode() const;
    int get_frequency() const;
    int get_numberOfEmployees() const;
    int get_capacityOfServicablePlanes() const;
    void print() const;

private:
    char* _radioCode;
    int _frequency;
    int _numberOfEmployees;
    int _capacityOfServicablePlanes; // How many airplanes can be serviced simultaneously
};

#endif // CLASS5_HPP
