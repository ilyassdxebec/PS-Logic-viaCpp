#include<iostream>
using namespace std;
enum enPrime{Prime,NotPrime};

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << endl << message;
        cin >> number;
    } while(number <= 0);
    return number;
}
void PrintArray(int arr[100], int arrLength){
     // cout<<"Array 1 Elements: \n"; 
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
void AddElementsToArray(int arr[],int &arrLength,int Number){
  arrLength++;
  arr[arrLength-1] = Number;
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
void CopyPrimeArrayElements(int arr1[],int arr2[],int arr1Length,int &arr2Length){
  for(int i=0;i<arr1Length;i++){
    if(CheckNumberType(arr1[i])==Prime){
       AddElementsToArray(arr2,arr2Length,arr1[i]);
    }
  }
}
int main(){
 srand((unsigned)time(NULL));
 int arr1[100],arr2[100],arr1Length,arr2Length=0;

 RandomArrayFilling(arr1,arr1Length);
 cout<<"\nArray 1 Elements: ";
 PrintArray(arr1,arr1Length);

CopyPrimeArrayElements(arr1,arr2,arr1Length,arr2Length);
cout<<"\nArray 2 Elements after copying Prime Numbers: ";
PrintArray(arr2,arr2Length);
}
//