/*Write a program print all prime numbers from 1 to N.*/
#include<iostream>
#include<string>
using namespace std;
enum enPrimeNotPrime{Prime=1,Not_Prime=2};

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
enPrimeNotPrime CheckPrime(int Number)
{
        int M=round(Number/2);
        for(int Counter=2;Counter<=M;Counter++)
        {
                if(Number%Counter==0)
                return enPrimeNotPrime::Not_Prime;
        }
                return enPrimeNotPrime::Prime;
};
void PrintPrimeFrom1ToN(int Number)
{
        cout<<"Prime numbers from "<<1<<" to: "<<Number<<" are: \n";
        for(int i=1;i<=Number;i++)
        {
                if(CheckPrime(i)==enPrimeNotPrime::Prime)
                {
                        cout<<i<<endl;
                }
        }
}
int main()
{
        PrintPrimeFrom1ToN(ReadNumber("Enter the number you want to check:"));
        return 0;
}