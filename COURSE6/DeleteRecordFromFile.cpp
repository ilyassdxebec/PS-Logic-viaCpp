//TODO : print file content before and after deleting a record from it (Names.txt)

#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
  fstream MyFile;

  MyFile.open(FileName,ios::out);

  if(MyFile.is_open())
  {
      for (string &write : vFileContent)
      {
        if(write != "")
        {
          MyFile << write << endl;
        }
      }
      MyFile.close();
  }

}

void LoadFileDataToVector(string FileName, vector<string> &vFileContent)
{
  fstream MyFile;
  
  MyFile.open(FileName,ios::in);

  if(MyFile.is_open())
  {
    string Line;

    while(getline(MyFile,Line))
    {
       vFileContent.push_back(Line);
    }
    MyFile.close();
  }

}

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

void DeleteRecordFromFile(string FileName, string Record)
{
  vector <string> vNames;
  
  LoadFileDataToVector(FileName,vNames);

  for(string &x : vNames)
  {
     if(x==Record){
        x = "";
     }
  }

  SaveVectorToFile(FileName,vNames);
}

int main()
{
  cout<<"File before deleting record : "<<endl;

  PrintFileToConsole("Names.txt");

  DeleteRecordFromFile("Names.txt","ahmed");

  cout<<"File after deleting record : "<<endl;

  PrintFileToConsole("Names.txt");

}