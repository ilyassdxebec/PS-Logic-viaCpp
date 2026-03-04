#include<iostream>
#include<cmath>
using namespace std;

struct stTaskDuration{
    int NumberOfDays,
    NumberOfHours,
    NumberOfMinutes,
    NumberOfSeconds;
};

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << endl << message;
        cin >> number;
    } while(number <= 0);
    return number;
}
stTaskDuration SecondsToTaskDuratoin(int Seconds){
 stTaskDuration TaskDuration;
 int remainder;

 const int SecondsInDays = 60*60*24;
 const int SecondsInHours = 60*60;
 const int SecondsInMinutes = 60;

 TaskDuration.NumberOfDays =Seconds/SecondsInDays;
  remainder = Seconds%SecondsInDays;
  TaskDuration.NumberOfHours = remainder/SecondsInHours;
  remainder = remainder%SecondsInHours;
  TaskDuration.NumberOfMinutes = remainder/SecondsInMinutes;
  remainder = remainder%SecondsInMinutes;
  TaskDuration.NumberOfSeconds = remainder;
  return TaskDuration;
}
void PrintSecondsToTaskDuration(stTaskDuration TaskDuration){
    cout<<endl<<TaskDuration.NumberOfDays<<":"<<TaskDuration.NumberOfHours<<":"<<TaskDuration.NumberOfMinutes<<":"<<TaskDuration.NumberOfSeconds;
}

int main(){
  int Seconds = ReadPositiveNumber("Please enter number of Seconds: ");
  PrintSecondsToTaskDuration(SecondsToTaskDuratoin(Seconds));
}