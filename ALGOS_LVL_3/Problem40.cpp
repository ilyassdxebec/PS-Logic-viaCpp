#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> ReadWords()
{
  char Choice;
  vector<string>vWords;
  string word;

 do
 {
  cout<<"Please enter a word : ";
  cin>>word;
  vWords.push_back(word);
  
  cout<<"\nDo you want to add other word?(y/n)";
  cin>>Choice;
  cout<<endl;
 }
 while(Choice=='Y' || Choice=='y');
 
 return vWords;
}

string JoinString(const vector<string>&vString,string delim = " ")
{   
    string Joined = "";
    
    for(const string &x : vString)
    {
      Joined = Joined + x + delim;
    }
   
    return Joined.substr(0,Joined.length()-delim.length());
}

string JoinString(const string arr[] ,int arrLength ,string delim = " ")
{   
    string Joined = "";
    
    for(short i=0;i<arrLength;i++)
    {
      Joined = Joined + arr[i] + delim;
    }
   
    return Joined.substr(0,Joined.length()-delim.length());
}

int main()
{
  vector<string>vWords = ReadWords();
  string arr[] = {"ilyass","goat","him"};

  cout<<"the joined string using a vector is : "<<JoinString(vWords,",");

  cout<<"\nthe joined string using an array is : "<<JoinString(arr,3,",");
}