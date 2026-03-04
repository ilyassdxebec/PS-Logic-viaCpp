#include<iostream>
using namespace std;

enum enWeek{Monday=1, Tuesday=2, Wednesday=3, Thursday=4, Friday=5, Saturday=6, Sunday=7};

void ShowWeekDaysMenu(){
    cout<<"_________________________"<<endl;
    cout<<"What is today? Enter a number: "<<endl;
    cout<<"(1): Monday"<<endl;
    cout<<"(2): Tuesday"<<endl;
    cout<<"(3): Wednesday"<<endl;
    cout<<"(4): Thursday"<<endl;
    cout<<"(5): Friday"<<endl;
    cout<<"(6): Saturday"<<endl;
    cout<<"(7): Sunday"<<endl;
}

int TakeWeekDayInput(){
    int input;
    cin>>input;
    return input;
}

enWeek OutputTheDay(){
    int input = TakeWeekDayInput();
    switch(input){
        case 1:
            return enWeek::Monday;
        case 2:
            return enWeek::Tuesday;
        case 3:
            return enWeek::Wednesday;
        case 4:
            return enWeek::Thursday;
        case 5:
            return enWeek::Friday;
        case 6:
            return enWeek::Saturday;
        case 7:
            return enWeek::Sunday;
        default:
            return enWeek::Monday; // Default to Monday for invalid input
    }
}

void PrintWeekDay(enWeek day){
    switch(day){
        case enWeek::Monday:
            cout<<"Monday"<<endl;
            break;
        case enWeek::Tuesday:
            cout<<"Tuesday"<<endl;
            break;
        case enWeek::Wednesday:
            cout<<"Wednesday"<<endl;
            break;
        case enWeek::Thursday:
            cout<<"Thursday"<<endl;
            break;
        case enWeek::Friday:
            cout<<"Friday"<<endl;
            break;
        case enWeek::Saturday:
            cout<<"Saturday"<<endl;
            break;
        case enWeek::Sunday:
            cout<<"Sunday"<<endl;
            break;
    }
}

int main(){
    ShowWeekDaysMenu();
    enWeek Weekday = OutputTheDay();
    PrintWeekDay(Weekday);
}