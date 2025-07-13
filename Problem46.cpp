/*Write a program to print abs of numbers,do not use built in abs function.*/
#include<iostream>
using namespace std;
// Purpose: Reads a floating-point number from the user.
float ReadNumber()
{
        float Number=0;
        cout<<"\nEnter a number:\n";
        cin>>Number;
        return Number;
} 
// Purpose: Computes the absolute value of a floating-point number.
float PrintMyABS(float Number)
{
        if(Number>0)
                return Number;
        else 
                 return Number*-1;
}
int main()
{
        float Number=ReadNumber();
        cout<<"\nMy ABS result: "<<PrintMyABS(Number)<<endl;
        cout<<"\nC++ ABS result: "<<abs(Number)<<endl;
        return 0;
}