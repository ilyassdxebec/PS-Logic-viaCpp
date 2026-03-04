#include<iostream>
using namespace std;

float ReadNumberOfHours(string message){
    float Hours;
    do{
        cout<<endl<<message;
        cin>>Hours;
    }while(Hours<=0);
    return Hours;
}
float HoursToWeeks(float Hours){
   return Hours/168;
}
float HoursToDays(float Hours){
    return Hours/24;
}

int main(){
  float Hours = ReadNumberOfHours("Please enter number of hours: ");
   float Days = HoursToDays(Hours);
   float Weeks = HoursToWeeks(Hours);

   cout<<Hours<<" hours converted to days is: "<<Days<<" and to weeks is: "<<Weeks;
}