#include<iostream>
using namespace std;
enum enTraficLightColors{Red=1,Green=2,Yellow=3,Invalid};
void PrintChoicesMenu(){
    cout<<"***********************"<<endl;
     cout<<"Please Choose trafic light color: "<<endl;
      cout<<"(1) For Red"<<endl;
       cout<<"(2) For Green"<<endl;
        cout<<"(3) For Yellow"<<endl;
}


int TakeUserChoice(){
    int input;
    cin>>input;
    return input;
}
enTraficLightColors EnumInsideMapping(){
    int input = TakeUserChoice();
    enTraficLightColors Color;
    switch (input)
    {
     case 1: Color = enTraficLightColors::Red; break;
     case 2: Color = enTraficLightColors::Green; break;
     case 3: Color = enTraficLightColors::Yellow; break;
     default: Color = Invalid;
    }
    return Color;
} 

string PrintTraficLightColor(enTraficLightColors Color){
    switch (Color)
    {
    case Red:
        return "RED";
        break;
        case Green:
        return "GREEN";
    
        case Yellow:
        return "YELLOW";

         case Invalid:
        return "INVALID INPUT LOSER";
    }
}


int main(){
PrintChoicesMenu();
string answer =PrintTraficLightColor(EnumInsideMapping());
cout<<answer;
}