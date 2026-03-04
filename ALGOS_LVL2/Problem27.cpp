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
 int SumOfArrayElements(int arr[],int arrLength){
   int sum=0;
   for(int i=0;i<arrLength;i++){
    sum+=arr[i];
   }
   return sum;
 }
 float ArrayNumberAverage(int arrLength, int arr[]){
    return (float)SumOfArrayElements(arr,arrLength)/arrLength;
 }
int main(){
 srand((unsigned)time(NULL));

 int arrLength,arr[100];
 RandomArrayFilling(arr,arrLength);
 PrintArray(arr,arrLength);
 cout<<"\n Average of all numbers is: "<<ArrayNumberAverage(arrLength,arr);
}