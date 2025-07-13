/*Write a program to print my sqrt of numbers,do not use built in sqrt function.*/
#include<iostream>
#include<cmath>
using namespace std;
// Purpose: Reads a floating-point number from the user.
float ReadNumber()
{
        float Number=0;
        cout<<"\nEnter a number:\n";
        cin>>Number;
        return Number;
} 
// Purpose: Computes the sqrt value of a floating-point number.
float PrintMysqrt(float Number)
{
        return pow(Number,0.5);
}
int main()
{
        float Number=ReadNumber();
        cout<<"\nMy sqrt result: "<<PrintMysqrt(Number)<<endl;
        cout<<"\nC++ sqrt result: "<<sqrt(Number)<<endl;
        return 0;
}