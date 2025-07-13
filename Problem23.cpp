/*Write a program to fill array with max size 100 with random numbers from 1 to 100.*/ 
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
// Purpose: Generates a random integer between two specified values (inclusive).
int RandNumber(int From,int To)
{
        int RandomNumber=rand()%(To-From+1)+From;
        return RandomNumber;
}
// Purpose: Fills an array with a specified number of random numbers between 1 and 100.
void FullArrayWithRandomNUmber(int arr[100],int &arrLength)
{
        cout<<"\nEnter how many elements you want:\n";
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

int main()
{
        srand((unsigned)time(NULL));
        int arr[100],arrLength;
        FullArrayWithRandomNUmber(arr,arrLength);
        cout<<"\n The array elements: \n";
        PrintArray(arr,arrLength);
        return 0;
}