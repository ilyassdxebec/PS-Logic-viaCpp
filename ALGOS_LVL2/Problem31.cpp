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
void Swap (int &A,int &B){
  int temp=0;
  temp = A;
  A=B;
  B=temp;
}

int RandomNumber(int from,int to){
  int RandomNumber = rand()%(to-from+1)+from;
  return RandomNumber;
}
void ShuffleArrayElements(int arr[],int arrLength){
  for(int i=0;i<arrLength;i++){
   Swap(arr[RandomNumber(0,arrLength-1)],arr[RandomNumber(0,arrLength-1)]);  
  }
}
void ArrayFillingFrom1ToN(int arr[100], int &arrLength){
   arrLength = ReadPositiveNumber("Enter number of elements: ");
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = i+1;
    }
    cout << endl;
}

void PrintArray(int arr[100], int arrLength){
      // cout<<"Array Elements: ";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int main(){
    srand((unsigned)time(NULL));
   
    int arr[100],arrLength;
    ArrayFillingFrom1ToN(arr,arrLength);
    cout<<"Array Elements before shuffle: \n";
    PrintArray(arr,arrLength);

    ShuffleArrayElements(arr,arrLength);
    cout<<"\n Array Elements after shuffling: \n";
    PrintArray(arr,arrLength);
}