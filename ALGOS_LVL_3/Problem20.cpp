#include <iostream>
#include <string>
#include <iomanip>
#include<vector>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }   
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf("%02d  ",arr[i][j]);
        }
        cout << "\n";
    }
}

bool isMatrixPalindrome(int arr[3][3] ,short Rows ,short Columns)
{
     for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Columns/2; j++)
        {
          if(arr[i][j] != arr[i][Columns-1-j])
          {
             return false;
          }
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n The following is a 3x3 random matrix :\n";

    PrintMatrix(arr, 3, 3);
    
    cout<<((isMatrixPalindrome(arr,3,3)) ? "\nYes , it is a Palindrome Matrix !" : "\nNo , it is not a Palindrome Matrix !");
}