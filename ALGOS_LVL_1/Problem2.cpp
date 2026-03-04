#include<iostream>
using namespace std;

string GetName(){
    string Name;
    cout<<"Enter your name: ";
    getline(cin,Name);
    return Name;
}
void OutputName(string Name){
    cout<<"Your Name is: "<<Name;
}
  
int main(){
    
    OutputName(GetName());
}