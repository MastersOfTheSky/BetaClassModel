#ifndef PERSON_HPP
#define PERSON_HPP

class Person
{
public:
    enum class classes
    {
        first,
        second,
        none
    };

    Person();
    Person(char*, bool, classes);

    char* Get_name_of_the_human();
    int Get_ticket_class();

    void PrintPerson();

private:
    char humanName[200];
    bool ticket;
    classes ticketClass;
};

#endif //PERSON_HPP

