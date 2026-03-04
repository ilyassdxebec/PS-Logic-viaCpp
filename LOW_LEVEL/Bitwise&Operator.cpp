#include<iostream>
using namespace std;
#include"MyLib.h"
using namespace MyLib;

int main()
{
    cout<<"Result "<<(12 & 34);//there is difference between logical && and bitwise &, you rarely use &
    // 12 in binary = 00001100
// 34 in binary = 00100010
// & result   = 00000000 → prints 0
}