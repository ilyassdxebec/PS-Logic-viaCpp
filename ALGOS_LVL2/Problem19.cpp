#include<iostream>
using namespace std;

int RandomNumber(int from,int to){
  int RandomNumber = rand()%(to-from+1)+from;
  return RandomNumber;
}
int main(){
 srand((unsigned)time(NULL));

 cout<<RandomNumber(5,100)<<endl;

}   