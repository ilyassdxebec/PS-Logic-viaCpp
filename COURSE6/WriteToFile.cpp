#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream MyFile;

    MyFile.open("Ilyass.txt",ios::out);

    if(MyFile.is_open())
    {
      MyFile<<"Ilyass"<<endl;
      MyFile<<"W"<<endl;
      MyFile<<"3";

      MyFile.close();
    }
}