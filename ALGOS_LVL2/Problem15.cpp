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
void PrintLetterPattern(int number){
    for(int i=65;i<=64+number;i++){
        for(int j=65;j<=i;j++){
            cout<<(char)i;
        }
        cout<<"\n";
    }
}
int main(){
PrintLetterPattern(ReadPositiveNumber("please enter a postive number: "));
}