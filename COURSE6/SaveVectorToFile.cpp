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

int main()
{
  vector<string>vFileContent = {"ilyass" , "legend"};
  
  SaveVectorToFile("ilyass.txt", vFileContent);

}
