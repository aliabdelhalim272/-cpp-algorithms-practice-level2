/*Write a program to print all words from AAA to ZZZ.*/
#include<iostream>
#include<string>
using namespace std;
void PrintLetterPattern()
{
        cout<<endl;
        string Word="";
        for(int i=65;i<=90;i++)
        {
                for(int j=65;j<=90;j++)
                {
                        for(int k=65;k<=90;k++)
                        {
                                Word.append(1,char(i));
                                Word.append(1,char(j));
                                Word.append(1,char(k));
                                cout<<Word<<endl;
                                Word="";
                        }
                }
        }
        cout<<"\n--------------------------------------\n";
};
int main()
{
        PrintLetterPattern();
        return 0;
}