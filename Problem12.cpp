/*Write a program to read a number and print inverted pattern.*/
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
void PrintInvertedPattern(int Number)
{
        cout<<endl;
        for(int i=Number;i>=1;i--)
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
        PrintInvertedPattern(ReadNumber("\nEnter a number: "));
        return 0;
}