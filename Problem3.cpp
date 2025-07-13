/*Write a program to check if the numebr is perfact or not ,note:the perfact number=Sum(all divisors.).*/
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
void PrintResult(int Number)
{
        if(CheckPerfactNumber(Number))
        cout<<" \n "<<Number<<" is a perfact number.\n";
        else 
        cout<<" \n "<<Number<<" is not a perfact number.\n";
};
int main()
{
        PrintResult(ReadNumber("Enter the number you want to check: "));
        return 0;
}