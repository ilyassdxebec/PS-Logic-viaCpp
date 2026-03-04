#include<iostream>
using namespace std;

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << endl << message;
        cin >> number;
    } while(number <= 0);
    return number;
}
void PrintInvertedPattern(int number){
    for(int i=number;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
}
int main(){
  PrintInvertedPattern(ReadPositiveNumber("please enter a positive number: "));
}