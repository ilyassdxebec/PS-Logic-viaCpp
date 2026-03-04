#include<iostream>
using namespace std;

enum eColor{RED,BlUE,WHITE,GREEN,YELLOW};
enum eGender{MALE,FEMALE};
enum eWeek{Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

int main(){
    struct stAdress{
       unsigned short zipcode = 400,HouseNumber,RoomNumber; 
    };
     struct stLocation{
      stAdress adress;
      string country,city;
      
    };
     struct stPerson{
      int age;
      string first_name,second_name;
      stLocation location;
    };

    stPerson peron1;

    eColor FavColor = eColor::RED;
    eWeek Today = eWeek::Sunday;
    eGender Gender = eGender::MALE;
    cout<<"you live in: "<<peron1.location.adress.zipcode;

}