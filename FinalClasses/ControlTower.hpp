#ifndef CONTROLTOWER_HPP
#define CONTROLTOWER_HPP

#include <string>

using std::string;

class ControlTower
{
public:

    ControlTower(string, int, int);

    string Get_radioCode() const;
    int Get_frequency() const;
    int Get_numberOfEmployees() const;
    int Get_capacityOfServicablePlanes() const;

private:
    string radioCode;
    int frequency;
    int numberOfEmployees;
    int capacityOfServicablePlanes; // How many airplanes can be serviced simultaneously
};

#endif // CLASS5_HPP
