/*Write a program to read and print the letter pattern.*/
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
void PrintLetterPattern(int Number)
{
        cout<<endl;
        for(int i=65;i<=65+Number-1;i++)
        {
                for(int j=1;j<=i-65+1;j++)
                {
                        cout<<char(i);
                }
                cout<<endl;
        }
};
int main()
{
        PrintLetterPattern(ReadNumber("\nEnter a number: "));
        return 0;
} 