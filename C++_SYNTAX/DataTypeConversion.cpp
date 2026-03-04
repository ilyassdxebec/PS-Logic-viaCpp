#include<iostream>
using namespace std;
#include<string>
int main(){
string st1= "43.22";
double d1 = stod(st1);
cout<<d1<<endl;
d1 = stof(st1);
cout<<d1<<endl;
d1 = stoi(st1);
cout<<d1<<endl;
int N1=20;
st1 = to_string(N1);
cout<<st1<<endl;
double N2 = 33.5;
st1 = to_string(N2);
cout<<st1<<endl;
float N3 = 55.23;
st1 = to_string(N3);
cout<<st1<<endl;
N1 = (float)N3;
cout<<N1;
}