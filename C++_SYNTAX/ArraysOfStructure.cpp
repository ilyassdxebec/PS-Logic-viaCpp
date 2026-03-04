#include<iostream>
using namespace std;
struct stInfo{
  string FirstName,LastName;
  short int age;
  int phone;
};

void ReadUserInfo(stInfo &person1){

  cout<<"Please enter your FirstName: ";
  cin>>person1.FirstName;
  cout<<endl;
  cout<<"Please enter your LastName: ";
  cin>>person1.LastName;
  cout<<endl;
  cout<<"Please enter your PhoneNumber: ";
  cin>>person1.phone;
  cout<<endl;
  cout<<"Please enter your Age: ";
  cin>>person1.age;
  cout<<endl;
}

void PrintUserInfo(stInfo &person1){

   cout<<"________________________"<<endl;
    cout<<"Your FirstName: "<<person1.FirstName<<endl;
    cout<<"Your LastName: "<<person1.LastName<<endl;
    cout<<"Your PhoneNumber : "<<person1.phone<<endl;
    cout<<"Your Age: "<<person1.age<<endl;
   cout<<"________________________"<<endl;
}

void ReadUsersInfo(stInfo persons[100],int &length){
    cout<<"how many users: ?"<<endl;
  
    cin>>length;
    for(int i=0;i<length;i++){
       ReadUserInfo(persons[i]);
    }

}
void PrintUsersInfo(stInfo persons[100],int length){
    cout<<"printing users info: "<<endl;
  for(int i=0;i<length;i++){
       PrintUserInfo(persons[i]);
    }
}


int main(){
    stInfo person1;
    stInfo persons[100];
     int length;
   ReadUserInfo(person1);
   PrintUserInfo(person1);
   ReadUsersInfo(persons,length);
   PrintUsersInfo(persons,length);
  
}