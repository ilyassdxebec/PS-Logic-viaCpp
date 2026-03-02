#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

void LoadStudentsFileToVector(string FileName, vector <string> &vStudents)
{
  fstream MyFile;

  MyFile.open(FileName, ios::in);

  if(MyFile.is_open())
  {
    string Line;

    while (getline(MyFile, Line))
    {
        vStudents.push_back(Line);
    }
    MyFile.close();
  }
}

void PrintStudents(vector <string> vStudents)
{
  for (const string &x : vStudents)
  {
    cout<<x<<endl;
  }
}

void UpdateVectorToFile(string FileName, vector <string> vStudents)
{
  fstream MyFile;
  
  MyFile.open(FileName,ios::out );

  if(MyFile.is_open())
  { 
    for(string &x : vStudents)
    {
       MyFile<<x<<endl ;
    }

    MyFile.close();
  }
}

int main()
{
    vector <string> vStudents;

    LoadStudentsFileToVector("Students.txt", vStudents);

    cout<<"_____Students Before adding ilyass Are_____"<<endl;

    PrintStudents(vStudents);

    vStudents.push_back("ilyass");

    UpdateVectorToFile("Students.txt", vStudents);
}