/*Write a program to fill array with max size 100 with random numbers from 1 to 100,then print minimum number.*/ 
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
// Purpose: Generates a random integer between two specified values (inclusive).
int RandNumber(int From,int To)
{
        int Rand=rand()%(To-From+1)+From;
        return Rand;
}
// Purpose: Fills an integer array with random numbers between 1 and 100.
void FillArrayWithRandNumber(int arr[100],int &arrLength)
{
        cout<<"\nEnter how many elements you want in the array:\n";
        cin>>arrLength;
        for(int i=0;i<=arrLength-1;i++)
        {
                arr[i]=RandNumber(1,100);
        }
}
// Purpose: Prints the elements of an integer array separated by spaces.
void PrintArray(int arr[100],int arrLength)
{
        for(int i=0;i<=arrLength-1;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<"\n";
}
// Purpose: Finds and returns the minimum number in an array.
int MinNumberinArray(int arr[100],int arrLength)
{
        int Min=arr[0];
        for(int i=0;i<arrLength;i++)
        {
                if(arr[i]<Min)
                {
                        Min=arr[i];
                }
        }
        return Min;
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[100],arrLength;
        FillArrayWithRandNumber(arr,arrLength);
        cout<<"\nThe elements in array: \n";
        PrintArray(arr,arrLength);
        cout<<"\nThe min number is:\n";
        cout<<MinNumberinArray(arr,arrLength)<<endl;
        return 0;
}