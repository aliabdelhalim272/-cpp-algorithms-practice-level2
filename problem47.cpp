/*Write a program to print round of numbers,do not use built in round function.*/
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
// Purpose: Computes the round value of a floating-point number.
float PrintMyRound(float Number)
{
        int IntPart;
        IntPart=int(Number);
        float FractionPart=GetFractionPart(Number);
        if(abs(FractionPart)>=.5)
        {
                if(Number>0)
                return ++IntPart;
                else 
                return --IntPart;
        }
        else 
        {
                return IntPart;
        }
}
int main()
{
        float Number=ReadNumber();
        cout<<"\nMy round result: "<<PrintMyRound(Number)<<endl;
        cout<<"\nC++ round result: "<<round(Number)<<endl;
        return 0;
}