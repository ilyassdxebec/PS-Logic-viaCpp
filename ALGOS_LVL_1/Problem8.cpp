#include<iostream>
using namespace std;
enum enPassFail{Pass=1,Fail=0};
float GetGrade(){
    float Grade;
    cout<<"Enter your grade: ";
    cin>>Grade;
    return Grade;
}
enPassFail CheckCondition(float Grade){
  if(Grade>=50) return enPassFail::Pass;
  else return enPassFail::Fail;
}
void PrintResult(float Grade){
      if(CheckCondition(Grade)==enPassFail::Fail) cout<<"\nWhat a loser!";
      else cout<<"\nYou passed";
}
int main(){
    PrintResult(GetGrade());
}