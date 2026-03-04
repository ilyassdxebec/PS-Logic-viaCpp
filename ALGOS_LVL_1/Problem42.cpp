#include<iostream>
using namespace std;

struct stTaskDuration {float Days,Hours,Minutes,Seconds;};
float ReadPositiveNumber(string message){
    float number;
    do{
        cout << endl << message;
        cin >> number;
    } while(number <= 0);
    return number;
}
stTaskDuration ReadTaskDuration(){
    stTaskDuration TD;
    TD.Days = ReadPositiveNumber("Please enter number of days: ");
    TD.Hours = ReadPositiveNumber("\nPlease enter number of hours: ");
    TD.Minutes = ReadPositiveNumber("\nPlease enter number of minutes: ");
    TD.Seconds = ReadPositiveNumber("\nPlease enter number of seconds: ");
    return TD;
}
float ConvertTaskDurationToSeconds(stTaskDuration TD){
 return TD.Seconds+TD.Minutes*60+TD.Hours*3600+TD.Days*86400;
}
int main(){
    float result =ConvertTaskDurationToSeconds(ReadTaskDuration());
    cout<<endl<<"The amount of seconds you've worked is: "<<result;
}