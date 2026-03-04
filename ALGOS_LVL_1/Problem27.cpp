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
     for(N;N>=1;N--){
        cout<<N<<endl;
     }
     cout<<"*******************\n";
}

void PrintRangeUsingDoWhileLoop(int N){
    cout<<"*******************\n";
    cout<<"Using a Do While loop: \n";
       do{
         cout<<N<<endl;
         N--;
       }while(N>=1);
     cout<<"*******************\n";
}

void PrintRangeUsingWhileLoop(int N){
    cout<<"*******************\n";
    cout<<"Using a while loop: \n";
     while(N>=1){
       cout<<N<<endl;
       N--;
     }
     cout<<"*******************\n";
}

int main(){
   int N = GetNumber();
   PrintRangeUsingForLoop(N);
   PrintRangeUsingDoWhileLoop(N);
   PrintRangeUsingWhileLoop(N);
}