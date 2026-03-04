#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int input;
    for(int i=0;i<5;i++){
      cout<<"please enter a number"<<endl;
      cin>>input;
      if(input>=50){
        continue;
      }
      sum+=input;
    }
}