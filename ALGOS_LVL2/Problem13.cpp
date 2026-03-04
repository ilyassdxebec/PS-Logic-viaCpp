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
void PrintNumberPattern(int number){
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
}
int main(){
   PrintNumberPattern(ReadPositiveNumber("Please enter a positive number: "));
}