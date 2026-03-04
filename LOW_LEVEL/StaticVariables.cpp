#include <iostream>
using namespace std;

void MyFunc()
{
    //normal variable's lifecycle ends when function ends but static lifecycle is throughout whole programm's lifecycle
static int Number = 1;
cout << "Value of Number: " << Number << "\n";
Number ++;
}

int main()
{
MyFunc();
MyFunc();
MyFunc();
return 0;
}