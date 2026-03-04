#include<iostream>
#include<string>
using namespace std;

struct stPerson{
   string FN,SN,FllName;
};
stPerson TakePersonIfno(){
    stPerson person;
    cout<<"Enter your first name: ";
    cin>>person.FN;
    cout<<"\nEnter your first name: ";
    cin>>person.SN;
    return person;
}
string MergeName(stPerson person){
    string FullName,space;
    space =" ";
  FullName =  person.FN.append(space).append(person.SN);
   return FullName;
}
void OutputFullName(string FullName){
   cout<<"\nYour Full Name is: "<<FullName;
}

int main(){
  OutputFullName(MergeName(TakePersonIfno()));
}