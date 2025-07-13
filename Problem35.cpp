/*Write a program to fill array with max size 100 with random numbers from 1 to 100,read number and print if it is found or not */ 
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
// Purpose: Generates a random integer within the inclusive range [From, To].
int RandomNumber(int From,int To)
{
        int Rand=rand()%(To-From+1)+From;
        return Rand;
}
// Purpose: Prompts the user to enter a number to search for.
int ReadNumebr()
{
        int Number=0;
        cout<<"\nEnter the number to search for:\n";
        cin>>Number;
        return Number;
}
// Purpose: Fills an array with random integers between 1 and 100.
void FillArrayWithRandomNubers(int arr[100],int&arrLength)
{
        cout<<"\nEnter the number of elements:\n";
        cin>>arrLength;
        for(int i=0;i<arrLength;i++)
        {
                arr[i]=RandomNumber(1,100);
        }

}
// Purpose: Prints the elements of an integer array separated by spaces.
void PrintArray(int arr[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<"\n";
}
// Purpose: Searches for a given number in an array and returns its index if found,
//          or returns -1 if the number is not in the array.
short FindNumberPositionInArray(int Number,int arr[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                if(arr[i]==Number)
                return i;
        }
        return -1;
}
// Purpose: Determines if a given number exists in the array.
bool IsNumberInArray(int Number,int arr[100],int arrLength)
{
       return FindNumberPositionInArray(Number,arr,arrLength)!=-1;
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[100];
        int arrLength;
        FillArrayWithRandomNubers(arr,arrLength);
        cout<<"\nArray 1 elements:\n";
        PrintArray(arr,arrLength);
        int Number=ReadNumebr();
        cout<<"\nThe Number you are looking for is: "<<Number<<endl;
        if(!IsNumberInArray(Number,arr,arrLength))
        cout<<"\nThe number is not found.\n";
        else 
        cout<<"\nThe number is found.\n";
        return 0;
}