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
   //arrLength = ReadPositiveNumber("Enter number of elements: ");
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
void CopySumArrayElementsInArray(int arr1[],int arr2[],int arrLength,int arr3[]){
   for(int i=0;i<arrLength;i++){
    arr3[i] = arr1[i]+arr2[i];
   }
}
int main(){
 srand((unsigned)time(NULL));

 int arrLength=10,arr[100],arr2[100],arr3[100];
 RandomArrayFilling(arr,arrLength);
 cout<<"Array 1 elements: \n";
 PrintArray(arr,arrLength);

  RandomArrayFilling(arr2,arrLength);
 cout<<"Array 2 elements: \n";
 PrintArray(arr2,arrLength);

  CopySumArrayElementsInArray(arr,arr2,arrLength,arr3);
  cout<<"\nSum of Array1 and Array2 Elements: \n";
  PrintArray(arr3,arrLength);
}