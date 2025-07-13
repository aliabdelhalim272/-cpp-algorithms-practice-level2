/*Write a program to print floor of numbers,do not use built in floor function.*/
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
// Purpose: Computes the floor value of a floating-point number.
float PrintMyFloor(float Number)
{
        if(Number>0)
        return int(Number);
        else 
        return int(Number)-1;
}
int main()
{
        float Number=ReadNumber();
        cout<<"\nMy floor result: "<<PrintMyFloor(Number)<<endl;
        cout<<"\nC++ floor result: "<<floor(Number)<<endl;
        return 0;
}