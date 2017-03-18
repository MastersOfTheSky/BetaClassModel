#ifndef PERSON_HPP
#define PERSON_HPP

class Person
{
public:
    enum class role
    {
        pilot,
        passanger
    };
    enum class classes
    {
        first,
        second,
        none
    };

    Person();
    Person(role, char*, classes);

    char* Get_position_of_the_human();
    int Get_position_of_the_humans();
    char* Get_name_of_the_human();
    int Get_ticket_class();

    void PrintPerson();

private:
    role human;
    char humanName[200];
    bool ticket;
    classes ticketClass;
};

#endif //PERSON_HPP

