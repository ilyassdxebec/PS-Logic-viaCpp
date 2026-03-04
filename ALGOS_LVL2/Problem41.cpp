#include<iostream>
using namespace std;

void ReadArray(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}
void PrintArray(int arr[100], int arrLength)
{
    cout<<"Array Elements: ";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

bool PalindromeArray(int arr[],int arrLength){
   for(int i=0;i<arrLength;i++){
    if(arr[i]!=arr[arrLength-1-i]) return false;
   }
    return true;
}
int main()
{
 srand((unsigned)time(NULL));
 int arr[100],arrLength;
   
  ReadArray(arr,arrLength);
  PrintArray(arr,arrLength);

  if(PalindromeArray(arr,arrLength)) cout<<"Yes,Array is palindrome";
  else cout<<"No, array is not palindrome";
}