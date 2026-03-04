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

int RandomNumber(int from,int to){
  int RandomNumber = rand()%(to-from+1)+from;
  return RandomNumber;
}
void RandomArrayFilling(int arr[100], int &arrLength){
   arrLength = ReadPositiveNumber("Enter number of elements: ");
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1,100);
    }
    cout << endl;
}
void PrintArray(int arr[100], int arrLength){
      cout<<"Array 1 Elements: \n"; 
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int NumberPositionInArray(int arr[],int arrLength,int number){
   for(int i=0;i<arrLength;i++){
      if(arr[i]==number){
         return i;
            }
      }
      return -1;
}
bool NumberExistArray(int arr[],int arrLength,int number){
      return NumberPositionInArray(arr,arrLength,number)!=-1;
}
int main(){
    srand((unsigned)time(NULL));
    int arr[100],arrLength,number;

    RandomArrayFilling(arr,arrLength);
    PrintArray(arr,arrLength);
    
      number = ReadPositiveNumber("Please enter a number to search for: ");
    cout<<"\nNumber you are looking for is: "<<number;
  
     if(NumberExistArray(arr,arrLength,number)) cout<<"\nYes,The number is found :-)";
     else cout<<"\n No,The number is not found :-(";
}