#include<iostream>
using namespace std;
//c
string ReadPassword(string message){
    string password;

        cout << endl << message;
        cin >> password;

    return password;
}
void GuessPassword(string password){
    int t=1;
    string word = "";
    for(int i=65;i<=90;i++){
        for(int j=65;j<=90;j++){
          for(int k=65;k<=90;k++){
            word=word+(char)i;
            word=word+(char)j;
            word=word+(char)k;
            cout<<"Trial ["<<t<<"]: "<<word<<endl;
            if(password==word){
                cout<<"password is: "<<word<<endl;
                cout<<"found after "<<t<<" trials";
                return;
            }
            t++;
            word="";
          }
        }
    }
}

int main(){
  GuessPassword(ReadPassword("please enter a password: "));
}