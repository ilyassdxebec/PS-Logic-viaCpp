#include<iostream>
using namespace std;

string ReadName(string message){
    string Name;

        cout << endl << message;
        getline(cin,Name);

    return Name;
}
string EncryptName(string Name,short EncryptionKey){
 for(int i=0;i<Name.length();i++){
    Name[i] = char((int)Name[i]+EncryptionKey);
 }
 return Name;
}
string DecryptName(string Name,short EncryptionKey){
 for(int i=0;i<Name.length();i++){
    Name[i] = char((int)Name[i]-EncryptionKey);
 }
 return Name;
}

int main(){
 const short EncryptionKey = 9;

   string Name = ReadName("Please enter your name: ");
   string NameEncrypted = EncryptName(Name,EncryptionKey);
   string NameDecrypted = DecryptName(NameEncrypted,EncryptionKey);
   
   cout<<"Name after encryption is: "<<NameEncrypted<<endl<<"Name after decryption is: "<<NameDecrypted;
}