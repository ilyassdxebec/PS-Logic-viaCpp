#include<iostream>
using namespace std;

void StringPractice(){
     string FullName,S2,S3;
    cout<<"Please enter String1: "<<endl;
    getline(cin,FullName);
    cout<<"Please enter String2: "<<endl;
    cin>>S2;
    cout<<"Please enter String3: "<<endl;
    cin>>S3;
    cout<<"**************************"<<endl;
    cout<<"The length of String1 is: "<<FullName.length()<<endl;
    cout<<"Characters at 0,2,4,7 are: "<<FullName[0]<<" "<<FullName[2]<<" "<<FullName[4]<<" "<<FullName[7]<<endl;
    cout<<"Concatenating String2 and String3 = "<<S2+S3<<endl;
    cout<<S2<<"*"<<S3<<" "<<stoi(S2)*stoi(S3);
}

int main(){
    int age;
    string FullName;
    float salary;
    cout<<"enter your age:"<<endl;
    cin>>age;
    cout<<"enter your FullName"<<endl;
    cin.ignore(1,'\n');
    getline(cin,FullName);
    cout<<"enter your salary: "<<endl;
    cin>>salary;

    cout<<age<<" "<<FullName<<" "<<salary;


 // StringPractice();
}