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
void CopyDistinctArrayElements(int arr1[],int arr2[],int arr1Length,int &arr2Length){
    AddElementsToArray(arr2,arr2Length,arr1[0]);
  for(int i=1;i<arr1Length;i++){
    if(!(arr1[i]==arr1[i-1])){
        AddElementsToArray(arr2,arr2Length,arr1[i]);
    }
  }
}

int main(){
 srand((unsigned)time(NULL));
 int arr1[] = {10,10,10,50,50,70,70,70,70,90},arr2[100],arr1Length=10,arr2Length=0;

 cout<<"\nArray 1 Elements: ";
 PrintArray(arr1,arr1Length);
 
CopyDistinctArrayElements(arr1,arr2,arr1Length,arr2Length);
cout<<"\nArray 2 after copying distinct elements: ";
PrintArray(arr2,arr2Length);
}
