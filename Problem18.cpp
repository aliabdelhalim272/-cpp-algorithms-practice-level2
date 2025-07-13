/*Write a program to read a text and encrypt is ,decrypt it.*/
#include<iostream>
#include<string>
using namespace std;
string ReadText()
{
        string Text ="";
        cout<<"\nEnter a text: ";
        getline(cin,Text);
        return Text;
};
string EncryptText(string Text,short EncryptionKey)
{
        for(int i=0;i<Text.length();i++)
        {
                Text[i]=char((int)Text[i]+EncryptionKey);
        }
        return Text;
};
string DecryptText(string Text,short EncryptionKey)
{
        for(int i=0;i<=Text.length();i++)
        {
                Text[i]=char((int)Text[i]-EncryptionKey);
        }
        return Text;
};
int main()
{
        const short EncryptionKey=2;
        string Text=ReadText();
        string TextAfterEncryption=EncryptText(Text,EncryptionKey);
        string TextAfterDecryption=DecryptText(TextAfterEncryption,EncryptionKey);
        cout<<"\nText before encryption: "<<Text<<endl;
        cout<<"Text after encryption: "<<TextAfterEncryption<<endl;
        cout<<"Text after decryption: "<<TextAfterDecryption<<endl;
        return 0;
}