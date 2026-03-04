#include<iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
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
       cout<<"Array Elements: ";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
 int ArrayMinNumber(int arr[],int arrLength){
    int min=arr[0];
    for(int i=0;i<arrLength;i++){
        if(arr[i]<min) min = arr[i];
    }
    return min;
 }
int main(){
 srand((unsigned)time(NULL));

 int arrLength,arr[100];
 RandomArrayFilling(arr,arrLength);
 PrintArray(arr,arrLength);
 cout<<"\n Min Number is: "<<ArrayMinNumber(arr,arrLength);
}