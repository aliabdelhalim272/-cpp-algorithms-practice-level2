/*Write a program to read a number and print the sum of its digits.*/
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
} ;
int SumOfDigits(int Number)
{
        int Sum=0,Remainder=0;
        while(Number>0)
        {
                Remainder=Number%10;
                Number=Number/10;
                Sum=Sum+Remainder;
        }
        return Sum;
}
int main()
{
        cout<<"\n Sum of digits: "<<SumOfDigits(ReadNumber("Enter a number: "));
        return 0;
}