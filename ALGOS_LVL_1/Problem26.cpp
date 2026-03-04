#include<iostream>
using namespace std;
int GetNumber(){
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    return N;
}
void PrintRangeUsingForLoop(int N){
    cout<<"*******************\n";
    cout<<"Using a for loop: \n";
     for(int i =1;i<=N;i++){
        cout<<i<<endl;
     }
     cout<<"*******************\n";
}

void PrintRangeUsingDoWhileLoop(int N){
    cout<<"*******************\n";
    cout<<"Using a Do While loop: \n";
      int counter = 0;
       do{
         counter++;
         cout<<counter<<endl;
       }while(counter<N);
     cout<<"*******************\n";
}

void PrintRangeUsingWhileLoop(int N){
    cout<<"*******************\n";
    cout<<"Using a while loop: \n";
     int counter = 1;
     while(counter<=N){
       cout<<counter<<endl;
       counter++;
     }
     cout<<"*******************\n";
}

int main(){
   int N = GetNumber();
   PrintRangeUsingForLoop(N);
   PrintRangeUsingDoWhileLoop(N);
   PrintRangeUsingWhileLoop(N);
}