#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

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

int main()
{
  vector <string> vFileContent;

  LoadFileDataToVector("ilyass.txt",vFileContent);

  for(const string &out : vFileContent)
  {
    cout << out <<endl;
  }
}