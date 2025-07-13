/*Write a program to fill array with maz size 100 with random numbers from 1 to 100,read number and returns its index in array if found to otherwise.*/
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
// Purpose: Prompts the user to enter a number to search for.
int ReadNumber()
{
        int Number=0;
        cout<<"\nPlease enter the number to search for:\n";
        cin>>Number;
        return Number;
} 
// Purpose: Generates a random integer within the inclusive range [From, To].
int RandNumber(int From,int To)
{
        int Rand=rand()%(To-From+1)+From;
        return Rand;
}
// Purpose: Fills an integer array with random numbers between 1 and 100.
void FillArrayWithRandNumber(int arr[100],int &arrLength)
{
        cout<<"\nEnter number of elements:\n";
        cin>>arrLength;
        for(int i=0;i<arrLength;i++)
        {
                arr[i]=RandNumber(1,100);
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
//          or -1 if the number does not exist in the array.
short FindNumberInPostion(int Number,int arr[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                if(arr[i]==Number)
                return i;
        }
        return -1;
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[100];
        int arrLength;
        FillArrayWithRandNumber(arr,arrLength);
        cout<<"\nArray 1 elements:\n";
        PrintArray(arr,arrLength);
        int Number=ReadNumber();
        cout<<"\nNumber you are looking for is: "<<Number<<endl;
        short NumberPosition=FindNumberInPostion(Number,arr,arrLength);
        if(NumberPosition==-1)
        cout<<"\nThe number is not found.\n";
        else 
        {
                cout<<"\nThe number found at position: "<<NumberPosition<<endl;
                cout<<"\nThe number found its order: "<<NumberPosition+1<<endl;
        }
        return 0;
}