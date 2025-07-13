/*Write a program to print all perfact number from 1 to N.*/
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
bool CheckPerfactNumber(int Number)
{
        int Sum=0;
        for(int i=1;i<Number;i++)
        {
                if(Number%i==0)
                Sum+=i;
        }
        return Number==Sum;
}
void PrintPerfactNumberFrom1toN(int Number)
{
        for(int i=1;i<=Number;i++)
        {
                if(CheckPerfactNumber(i))
                {
                        cout<<i<<endl;
                }
        }
};
int main()
{
        PrintPerfactNumberFrom1toN(ReadNumber("Enter the number you want to check: "));
        return 0;
} 