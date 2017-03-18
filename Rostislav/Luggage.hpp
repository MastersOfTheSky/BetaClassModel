#ifndef LUGGAGE_HPP
#define LUGGAGE_HPP

class Luggage {

public:

    enum type {
        Personal,
        Suitcase
    };

    Luggage(type of_lugg, float mass, float weight);

    const char* get_type() const;
    float get_mass() const;
    float get_weight() const;
    void print() const;

private:

    type _of_lugg;
    float _mass;
    float _weight;

};

#endif // CLASS1_HPP
