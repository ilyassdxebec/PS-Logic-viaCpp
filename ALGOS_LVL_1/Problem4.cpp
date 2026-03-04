#include<iostream>
using namespace std;

struct stPerson{
    int age;
    bool DL;
    bool HasAccomandation;
};

stPerson TakeInput(){
    stPerson person;
    cout<<"Enter Your age: ";
    cin>>person.age;
    cout<<"\n Do you have a Driver License? (1)/Yes.(0)/NO";
    cin>>person.DL;
    cout<<"\n Do you Accomandation? (1)/Yes.(0)/NO";
    cin>>person.HasAccomandation;
    return person;
}
bool CheckHirability(stPerson person){
    if(person.HasAccomandation==true) return true;
  else return (person.age>21 && person.DL==1);
}
void PrintAnswer(bool result){
    if(result==true) cout<<"hired";
    else "not hired";
}

int main(){
    PrintAnswer(CheckHirability(TakeInput()));
 }