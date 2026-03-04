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
void PrintArray(int arr[100], int arrLength){
      cout<<"Array 1 Elements: \n"; 
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
void AddElementsToArray(int arr[],int &arrLength,int Number){
  arrLength++;
  arr[arrLength-1] = Number;
}
void InputNumbersToArray(int arr[],int &arrLength){
  bool Answer;
  do{
     AddElementsToArray(arr,arrLength,ReadPositiveNumber("Please enter a number: "));
     cout<<"\n Do you want to add another number, yes[1],No[0]?";
     cin>>Answer;
  }while(Answer);
}

int main(){
  int arr[100],arrLength=0;

 InputNumbersToArray(arr,arrLength);
 cout<<"\n Array length is: "<<arrLength;
 cout<<"\nArray Elements are: ";
 PrintArray(arr,arrLength);
}