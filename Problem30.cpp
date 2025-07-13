/*Write a program to fill array two arrays with max size 100 with random numbers from 1to 100,Sum their elements in a third array and print the result.*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
// Purpose: Generates a random integer within the inclusive range [From, To].
int RandNumber(int From,int To)
{
        int Rand=rand()%(To-From+1)+From;
        return Rand;
}
// Purpose: Prompts the user with a message to enter a positive number.
//          Repeats the prompt until the user enters a number greater than zero.
int ReadNumber(string Message)
{
        int Number=0;
        do 
        {
                cout<<Message<<endl;
                cin>>Number;
        }while(Number<=0);
        return Number;
}
// Purpose: Fills an array with random integers between 1 and 100.
void FillArrayWithRandNumber(int arr[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                arr[i]=RandNumber(1,100);
        }
}
// Purpose: Computes the element-wise sum of two arrays and stores the result in a third array.
void Sumof2Arrays(int arr[100],int arr2[100],int arrSum[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                arrSum[i]=arr[i]+arr2[i];
        }
}
//Purpose: Prints the elements of an integer array separated by spaces.
void PrintArray(int arr[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<endl;
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[100],arr2[100],arrSum[100];
        int arrLength=ReadNumber("\nHow many elements you want:\n");
        FillArrayWithRandNumber(arr,arrLength);
        FillArrayWithRandNumber(arr2,arrLength);
        Sumof2Arrays(arr,arr2,arrSum,arrLength);
        cout<<"\nThe elements of the first array are: \n";
        PrintArray(arr,arrLength);
        cout<<"\nThe elements of the second array are: \n";
        PrintArray(arr2,arrLength);
        cout<<"\n The sum of the 2 arrays is:\n";
        PrintArray(arrSum,arrLength);
        return 0;
}
