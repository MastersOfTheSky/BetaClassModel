#include<iostream>
#include<string.h>
using namespace std;
enum  Gender{
female,
male
};
enum Type{
back_end,
front_end,
full_stack};
 class Person{
public :
    Person(char _name[30],char _egn[10],Gender gender,char _address[60],char _phone[15]);
    void Set_name(char _name[30]);
    void Set_phone(char _phone[15]);
    void Set_address(char _address[60]);

    char* Get_name();
    char* Get_address();
char* Get_phone();
Gender Get_gender();
char* Get_egn();



private:
   // int years;
    char egn[10];
    char name[30];
    Gender gender;
    char address[60];
    char phone[15];

};
Person::Person(char _name[30],char _egn[10],Gender _gender,char _address[60],char _phone[15])
{strcpy(name,_name);
strcpy(egn,_egn);
gender=_gender;
strcpy(address,_address);
strcpy(phone,_phone);
}

 void Person::Set_name(char* _name){strcpy(name,_name);}
  void Person::Set_phone(char* _phone){strcpy(phone,_phone);}
void Person::Set_address(char* _address){strcpy(address,_address);}
char* Person::Get_name(){return name;}
char* Person::Get_address(){return address;}
char* Person::Get_phone(){return phone;}
Gender Person::Get_gender(){return gender;}
char* Person::Get_egn(){return egn;}

/*****************************************************************************/

class Employee: public Person{
public:
    Employee(char _date_started_working[10],double _salary,char _name[30],char _egn[10],Gender _gender,char _address[60],char _phone[15]);
    void Set_salary(double _salary);
    void Set_date_started_working(char _date_started_working[10]);
    double Get_salary();


private:
char date_started_working[10];
double salary;



                      };
 Employee::Employee(char _date_started_working[10],double _salary,char _name[30],char _egn[10],Gender _gender,char _address[60],char _phone[15])
 :Person(_name,_egn, _gender,_address,_phone)
{strcpy(date_started_working,_date_started_working);
salary=_salary;

}


void Employee::Set_salary(double _salary){
salary=_salary;}
double Employee::Get_salary(){
return salary; }
void Employee::Set_date_started_working(char* _date_started_working){
strcpy(date_started_working,_date_started_working);}

/************************************************************************/

class Programmer:public Employee{
public:
    Programmer(char _programming_languages[100],bool _is_teamlead,Type _type,char _date_started_working[10],double _salary,char _name[30],char _egn[10],Gender _gender,char _address[60],char _phone[15]);
    void Set_is_teamlead(bool _is_teamlead);
    void Set_type(Type _type);
    bool Get_is_teamlead();
    char* Get_programming_languages();
private:
 bool is_teamlead;
 Type type;
 char programming_languages[100];




};
Programmer::Programmer(char _programming_languages[100],bool _is_teamlead,Type _type,char _date_started_working[10],double _salary,char _name[30],char _egn[10],Gender _gender,char _address[60],char _phone[15])
:Employee(_date_started_working,_salary,_name,_egn,_gender,_address,_phone){
strcpy(programming_languages,_programming_languages);
is_teamlead=_is_teamlead;
type=_type;
}
char* Programmer::Get_programming_languages(){
return programming_languages;}
void Programmer::Set_is_teamlead(bool _is_teamlead){
is_teamlead=_is_teamlead;}
void Programmer::Set_type(Type _type){
type=_type;}
bool Programmer::Get_is_teamlead(){
return is_teamlead;}
/***********************************************************************/
int main(){
Person p("ivan","01",male,"sofia","0081923");
cout<<p.Get_name()<<endl;
Employee e("01.06.19",2000,"joro","02",male,"varna","014123");
cout<<e.Get_address()<<endl;
Programmer pr("java, html, css",true,full_stack,"04.03.2001",3000,"martin","03",male,"plovdiv","01514321");
cout<<pr.Get_programming_languages()<<" "<<pr.Get_name();
return 0;

}



