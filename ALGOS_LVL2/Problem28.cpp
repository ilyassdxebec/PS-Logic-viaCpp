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
      // cout<<"Array Elements: ";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
void CopyArrayElements(int arr[],int arr2[],int arrLength){
   for(int i=0;i<arrLength;i++){
    arr2[i]=arr[i];
   }
}
int main(){
 srand((unsigned)time(NULL));

 int arrLength,arr[100],arr2[100];
 RandomArrayFilling(arr,arrLength);
 PrintArray(arr,arrLength);
 CopyArrayElements(arr,arr2,arrLength);
 cout<<"\n";
 cout<<"Array 2 Elements After copying are: ";
 PrintArray(arr2,arrLength);
}