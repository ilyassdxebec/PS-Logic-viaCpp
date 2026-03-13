#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream MyFile;

    MyFile.open("Ilyass.txt",ios::out | ios::app);

    if(MyFile.is_open())
    {
     MyFile<<"this is a new line ";

      MyFile.close();
    }
} 