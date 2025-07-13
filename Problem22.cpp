/*Write a program to read N elements and store them in array then print all array elements and ask for a number to check then print how many number a certain element repeated in that array.*/
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;
int ReadNumber(string Message)
{
        int Number=0;
        do 
        {
                cout<<Message<<endl;
                cin>>Number;
        }while(Number<0);
        return Number;
}
void ReadArray(int arr[100],int &arrLength)
{
        cout<<"\n Enter the length of the array: \n";
        cin>>arrLength;
        cout<<"\nEnter the array elements: \n";
        for(int i=0;i<arrLength;i++)
        {
                cout<<"\nElement[ "<<i+1<<" ]:";
                cin>>arr[i];
        };
        cout<<endl;
}
void PrintArray(int arr[100],int arrLength)
{
        for(int i=0;i<=arrLength-1;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<"\n";
}
int TimesRepeated(int Number,int arr[100],int arrLength)
{
        int Counter=0;
        for(int i=0;i<=arrLength-1;i++)
        {
                if(Number==arr[i])
                {
                        Counter++;
                }
        }
        return Counter;
}
int main()
{
        int arr[100],arrLength,NumberToCheck;
        ReadArray(arr,arrLength);
        NumberToCheck=ReadNumber("\nEnter the number you want to check: \n");
        cout<<"\n The original array: \n";
        PrintArray(arr,arrLength);
        cout<<"\nNumber "<<NumberToCheck;
        cout<<" is repeated: \n";
        cout<<TimesRepeated(NumberToCheck,arr,arrLength)<<" time(s).\n";
        return 0;
}