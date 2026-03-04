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

int RandomNumber(int from,int to)
{
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
void PrintArray(int arr[100], int arrLength)
{
      // cout<<"Array Elements: ";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
void CopyArrayElementsInReverse(int arr[],int arr2[],int arrLength){
   for(int i=0;i<arrLength;i++){
    arr2[i]=arr[arrLength-1-i];
   }
}
int main()
{

 srand((unsigned)time(NULL));
 int arr[100],arrLength,arr2[100];
   
   RandomArrayFilling(arr,arrLength);
   cout<<"Array 1 Elements: \n";
   PrintArray(arr,arrLength);
   
   CopyArrayElementsInReverse(arr,arr2,arrLength);
   cout<<"\n Array 2 Elements after reversing are: \n";
   PrintArray(arr2,arrLength);
}