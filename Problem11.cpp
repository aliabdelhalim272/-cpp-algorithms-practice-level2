/*Write a program to read and check if it is palindrome.note that:Palindrome is a number that reads the same from right to left.*/
 #include<iostream>
#include<string>
using namespace std;
int ReadNumer(string Message)
{
        int Number=0;
        do 
        {
                cout<<Message<<endl;
                cin>>Number;
        }while(Number<=0);
        return Number;
};
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
bool IsPalindrome(int Number)
{
        return Number==ReseveNumber(Number);
};
int main()
{
        if (IsPalindrome(ReseveNumber(ReadNumer("\nEnter a number: "))))
        cout<<"\n Yes,it is a palindrome number.\n";
        else 
        cout<<"\n No,it is not a palindrome number.\n";
        return 0;
}