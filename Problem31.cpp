/*Write a program to fill array with ordered numbers from 1 to N ,then print it,after that shuffle this array and print it after shuffle.*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
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
void Swap(int &A,int &B)
{
        int Temp=A;
        A=B;
        B=Temp;
}
// Purpose: Generates a random integer within the inclusive range [From, To].
int RandNumber(int From,int To)
{
        int Rand=rand()%(To-From+1)+From;
        return Rand;
}
// Purpose: Fills an array with sequential numbers from 1 to N, where N is the array length.
void FillArraywith1toN(int arr[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                arr[i]=i+1;
        }
}
// Purpose: Randomly shuffles the elements in the array.
void ShuffleArray(int arr[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                swap(arr[RandNumber(1,arrLength)-1],arr[RandNumber(1,arrLength)-1]);
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
        int arr[100];
        int arrLength=ReadNumber("\nEnter a positive number:\n");
        FillArraywith1toN(arr,arrLength);
        cout<<"\nThe array elements before shuffle:\n";
        PrintArray(arr,arrLength);
        ShuffleArray(arr,arrLength);
        cout<<"\nThe array elements after shuffle:\n";
        PrintArray(arr,arrLength);
        return 0;

}