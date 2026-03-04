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

int RandomNumber(int from,int to){
  int RandomNumber = rand()%(to-from+1)+from;
  return RandomNumber;
}
void RandomArrayFilling(int arr[100], int &arrLength){
   arrLength = ReadPositiveNumber("Enter number of elements: ");
    for (int i = 0; i < arrLength; i++)
    {
        //Array filling from -100 to 100
        arr[i] = RandomNumber(-100,100);
    }
    cout << endl;
}
bool isPositive(int number){
    return number>0;
}
int CheckArrayPositiveNumbers(int arr[],int arrLength){
    int positive =0;
  for(int i=0;i<arrLength;i++){
     if(isPositive(arr[i])) positive++;
  }
  return positive;
}
int main(){
 srand((unsigned)time(NULL));
 int arr1[100],arr1Length;

 RandomArrayFilling(arr1,arr1Length);
 cout<<"\nArray Elements: ";
 PrintArray(arr1,arr1Length);

 cout<<"Positive Numbers are: "<<CheckArrayPositiveNumbers(arr1,arr1Length);
  }