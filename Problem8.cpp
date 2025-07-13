/*Write a program to read a digit and a number,then print digit frequency in that number.*/
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
int CountDigitsFrequency(short DigitToCheck,int Number)
{
        int FreqCount=0;
        int Remainder=0;
        while (Number>0)
        {
                Remainder=Number%10;
                Number=Number/10;
                if(DigitToCheck==Remainder)
                {
                        FreqCount++;
                }
        }
        return FreqCount;
};
int main()
{
        int Number=ReadNumber("\nEnter the main number:\n");
        short DigitToCheck=ReadNumber("\nEnter one digit to check:\n");
        cout<<"\nDigit "<<DigitToCheck<<" Frequency is "<<CountDigitsFrequency(DigitToCheck,Number)<<" Time(s).\n";
        return 0;
}