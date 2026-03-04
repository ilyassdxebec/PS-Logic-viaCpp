#include<iostream>
using namespace std;

enum enPrime{Prime,NotPrime};

enPrime CheckNumberType(int num){
    if(num <= 1) return enPrime::NotPrime; 
   int mid=num/2;
   for(int i=2;i<=mid;i++){
      if(num%i==0){
        return enPrime::NotPrime;
      }
   }
   return enPrime::Prime;
}

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
void CopyPrimeArrayElements(int arr[],int arr2[],int arrLength,int &arr2Length){
    int counter=0;
   for(int i=0;i<arrLength;i++){
     if(CheckNumberType(arr[i])==Prime){
        arr2[counter]=arr[i];
        counter++;
   }
   arr2Length=counter;
}
}
int main(){
     srand((unsigned)time(NULL));

 int arrLength,arr[100],arr2[100],arr2Length=0;
 RandomArrayFilling(arr,arrLength);
 PrintArray(arr,arrLength);
 CopyPrimeArrayElements(arr,arr2,arrLength,arr2Length);
 cout<<"\n Prime numbers in array2 are: ";
 PrintArray(arr2,arr2Length);
}







