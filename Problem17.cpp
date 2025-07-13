/*Write a program to guess a 3 letter password(all capital).*/
#include<iostream>
#include<string> 
using namespace std;
string ReadPassword()
{
        string PassWord="";
        cout<<"Enter your password: \n";
        cin>>PassWord;
        return PassWord;
};
bool GuessPassword(string OriginalPassword)
{
        string Word="";
        int Counter=0;
        cout<<endl;
        for(int i=65;i<=90;i++)
        {
                for(int j=65;j<=90;j++)
                {
                        for(int k=65;k<=90;k++)
                        {
                                Word=Word+char(i);
                                Word=Word+char(j);
                                Word=Word+char(k);
                                Counter++;
                                cout<<"Trial [ "<<Counter<<" ] : "<<Word<<endl;
                                if(Word==OriginalPassword)
                                {
                                        cout<<"\nPassword is "<<Word<<".\n";
                                        cout<<"Found after "<<Counter<<" Trial(s).\n";
                                        return true;
                                }
                                Word="";
                        }
                }
        }
        return false;
};
int main()
{
        GuessPassword(ReadPassword());
        return 0;
}