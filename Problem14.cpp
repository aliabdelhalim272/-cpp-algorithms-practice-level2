/*Write a program to read and print inverted letter pattern.*/
#include<iostream>
#include<string>
using namespace std;
int ReadNumber(string Message)
{
        int Number=0;
        do 
        {
                cout<<Message<<endl;
                cin>>Number;
        }while(Number<=0);
        return Number;
};
void PrintInvertedLetterPattern(int Number)
{
        cout<<endl;
        for(int i=65+Number-1;i>=65;i--)
        {
                for(int j=1;j<=Number-(65+Number-1-i);j++)
                {
                        cout<<char(i);
                }
                cout<<endl;
        }
};
int main()
{
        PrintInvertedLetterPattern(ReadNumber("\nEnter a number: "));
        return 0;
} 