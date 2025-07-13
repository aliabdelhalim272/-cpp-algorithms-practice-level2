/*Write a program to print ceil of numbers,do not use built in ceil function.*/
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
// Purpose: Extracts the fractional part of a floating-point number.
float GetFractionPart(float Number)
{
        return Number-int(Number);
}
// Purpose: Computes the ceil value of a floating-point number.
float PrintMyCeil(float Number)
{
        if(abs(GetFractionPart(Number))>0)
                if(Number>0)
                return int(Number)+1;
                else 
                return int(Number);
        else 
        return Number;

}
int main()
{
        float Number=ReadNumber();
        cout<<"\nMy ceil result: "<<PrintMyCeil(Number)<<endl;
        cout<<"\nC++ ceil result: "<<ceil(Number)<<endl;
        return 0;
}