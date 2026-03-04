#include<iostream>
using namespace std;
#include"MyLib.h"
using namespace MyLib;

int main()
{
 int number = ReadNumber("Please enter a number: ");
 //first programm
 //CheckNumberSign(number) ? cout<<"Positive" : cout<<"Negative";

 //second programm
 (number==0)? cout<<"Number is Zero" : CheckNumberSign(number) ? cout<<"Positive" : cout<<"Negative";
}