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
void PrintInvertedLettersPattern(int number){
    for(int i=number+64;i>=65;i--){
        for(int j=65;j<=i;j++){
            cout<<(char)i;
        }
        cout<<"\n";
    }
}

int main(){
  PrintInvertedLettersPattern(ReadPositiveNumber("Please enter a positive number: "));
}