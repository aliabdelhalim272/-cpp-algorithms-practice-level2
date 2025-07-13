/*Write a program to read a number and print the number pattern.*/ 
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
void PrintNumberPattern(int Number)
{
        cout<<endl;
        for(int i=1;i<=Number;i++)
        {
                for(int j=1;j<=i;j++)
                {
                        cout<<i;
                }
                cout<<endl;
        }
};
int main()
{
        PrintNumberPattern(ReadNumber("\nEnter a number: "));
        return 0;
}