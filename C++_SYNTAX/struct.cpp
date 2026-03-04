#include<iostream>
using namespace std;
int main(){

struct Adress{
 string city;
 string country;
};
struct Salary{
 float MS;
 float YS;
};

struct Person{
 string name;
 int age;
 char gender;
 bool married = 1;
 Salary salary;
 Adress adress;
};
Person person1;

cout<<"enter your name: "<<endl;
cin>>person1.name;
cout<<"enter your age: "<<endl;
cin>>person1.age;
cout<<"enter your gender: "<<endl;
cin>>person1.gender;
cout<<"enter your city: "<<endl;
cin>>person1.adress.city;
cout<<"enter your country: "<<endl;
cin>>person1.adress.country;
cout<<"enter your monthly salary: "<<endl;
cin>>person1.salary.MS;

cout<<"************"<<endl;
cout<<"your name is: "<<person1.name<<endl;
cout<<"your age is: "<<person1.age<<endl;
cout<<"your city is: "<<person1.adress.city<<endl;
cout<<"your country is: "<<person1.adress.country<<endl;
cout<<"your mounthly salary is: "<<person1.salary.MS<<endl;
cout<<"your yearly salary is: "<<person1.salary.MS*12<<endl;
cout<<"your gender is: "<<person1.gender<<endl;
cout<<"married = "<<person1.married<<" true"<<endl;
cout<<"************";



}