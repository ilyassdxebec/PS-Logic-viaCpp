#include<iostream>
using namespace std;

int TakeNumber(string message){
    int number;
    cout<<message;
    cin>>number;
    return number;
}
int SumNumbers(){
    int number,counter=1,sum=0;
    do{
        number = TakeNumber("\nPlease Enter number "+to_string(counter)+": ");
        if(number==-99){
            break;
        }
        sum+=number;
        counter++;

    }while(true);
    return sum;
}

int main(){
  cout<<SumNumbers();
}