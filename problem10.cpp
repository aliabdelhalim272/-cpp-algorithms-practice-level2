/*Write a program to read a number and print it in order from left to right.*/
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
int ReseveNumber(int Number)
{
        int Remainder=0;
        int Number2=0;
        while(Number>0)
        {
                Remainder=Number%10;
                Number=Number/10;
                Number2=Number2*10+Remainder;
        }
        return Number2;
};
void PrintDigits(int Number)
{
        int Remainder=0;
        while(Number>0)
        {
                Remainder=Number%10;
                Number/=10;
                cout<<Remainder<<endl;
        }
}
int main()
{
        PrintDigits(ReseveNumber(ReadNumber("Enter a number: ")));
        return 0;
}