#include<iostream>
#include<fstream>
using namespace std;

void PrintFileToConsole(string FileName)
{
   fstream MyFile;

   MyFile.open(FileName,ios::in);

   if(MyFile.is_open())
   {
    string Line;

     while(getline(MyFile,Line))
     {
        cout<<Line<<endl;
     }

     MyFile.close();
   }
}

int main()
{
   PrintFileToConsole("ilyass.txt");
}