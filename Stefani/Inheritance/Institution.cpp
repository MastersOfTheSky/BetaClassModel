#include<iostream>
#include<string.h>
using namespace std;
enum Type{
formal,
informal


};
enum Type_education{
public_,
private_

};



class Institution{
public:
    Institution(char _bulstat[10],Type _type);
    void Set_type(Type _type);


private:
    char bulstat[10];
    Type type;





};
Institution::Institution(char _bulstat[10],Type _type){

strcpy(bulstat,_bulstat);
type=_type;


}

 void Institution::Set_type(Type _type){
 type=_type;}

 class Education:public Institution{
 public:

     Education(int _max_of_people,Type_education _type_ed,char _bulstat[10],Type _type );
     int Get_max_of_people();


 private:
    int max_of_people;
    Type_education type_ed;




 };

 Education::Education(int _max_of_people,Type_education _type_ed,char _bulstat[10],Type _type ):Institution(_bulstat,_type){
max_of_people=_max_of_people;
type_ed=_type_ed;

 }
 int Education::Get_max_of_people(){
 return max_of_people;}


 class School:Education{
 public:
     School(char _name[60],char _address[50],int _num_of_teachers, int _num_of_students,int _max_of_people,Type_education _type_ed,char _bulstat[10],Type _type);
     char* Get_name();
     void Set_address(char address[50]);



 private:
    char name[60];
    char address[50];
    int num_of_teachers;
    int num_of_students;
 } ;

 School::School(char _name[60],char _address[50],int _num_of_teachers, int _num_of_students,int _max_of_people,Type_education _type_ed,char _bulstat[10],Type _type)
     :Education(_max_of_people,_type_ed,_bulstat,_type){
 strcpy(name,_name);
 strcpy(address,_address);
 num_of_teachers=_num_of_teachers;
 num_of_students=_num_of_students;


 }
char* School::Get_name(){return name;}
void School::Set_address(char _address[50]){
strcpy(address,_address);
}

 int main(){

 School s("Qvorov","Sofia",200,700,1600,public_,"123114",formal);
 cout<<s.Get_name();


 return 0;
 }




