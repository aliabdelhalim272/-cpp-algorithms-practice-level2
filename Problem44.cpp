/*Write a program to fill array with max size 100 with random numbers from - 100 to 100,then print the count of positive numbers.*/
#include<iostream>
#include<string>
using namespace std; 
// Purpose: Generates a random integer within the inclusive range [From, To].
int RandomNumber(int From,int To)
{
        return rand()%(To-From+1)+From;
}
// Purpose: Fills an array with random numbers between 1 and 100.
void FillArrayWithNumbers(int arr[100],int &arrLength)
{
        cout<<"\nEnter the length of the array:\n";
        cin>>arrLength;
        for(int i=0;i<arrLength;i++)
        {
                arr[i]=RandomNumber(-100,100);
        }
}
// Purpose: Prints the elements of an array separated by spaces.
void PrintArray(int arr[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<"\n";
}
// Purpose: Counts how many positive numbers exist in an array.
int CountThePositiveNumbers(int arr[100],int arrLength)
{
        int Counter=0;
        for(int i=0;i<arrLength;i++)
        {
                if(arr[i]>0)
                {
                        Counter++;
                }
        }
        return Counter;
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[100],arrLength=0;
        FillArrayWithNumbers(arr,arrLength);
        cout<<"\nArray elements:\n";
        PrintArray(arr,arrLength);
        cout<<"\nPositive numbers count is:\n";
        cout<<CountThePositiveNumbers(arr,arrLength)<<endl;
        return 0;
}