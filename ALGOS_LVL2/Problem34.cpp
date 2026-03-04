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
int main(){
    srand((unsigned)time(NULL));
    int arr[100],arrLength,number,position;

    RandomArrayFilling(arr,arrLength);
    PrintArray(arr,arrLength);
    
    number = ReadPositiveNumber("Please enter a number to search for: ");
    cout<<"\nNumber you are looking for is: "<<number;
    
    position = NumberPositionInArray(arr,arrLength,number);
    if(position==-1) cout<<"\n The number is not found :-(";
    else{
         cout<<"\n The number found at position: "<<position;
    cout<<"\n The number found it's order: "<<position+1;
    }
}