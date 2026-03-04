#include<iostream>
using namespace std;
struct Info
{
    int age,phoneNumber;
    string FullName;
};
void ReadInfo(Info &read){
 cout<<"enter your age: "<<endl;
 cin>>read.age;
 cout<<"enter your Full Name : "<<endl;
 cin.ignore(1,'\n');
 getline(cin,read.FullName);
 cout<<"enter your phoneNumber: "<<endl;
 cin>>read.phoneNumber;
}
void PrintInfo(Info &print){
  cout<<"*************\n";
cout<<"your age is: "<<print.age<<endl;
cout<<"your phone number is: "<<print.phoneNumber<<endl;
cout<<"your Name is: "<<print.FullName<<endl;
}
//it's all about clean code and reusability
int main(){
    Info info1;
ReadInfo(info1);
PrintInfo(info1);
}