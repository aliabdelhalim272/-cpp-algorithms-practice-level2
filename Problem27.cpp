/*Write a program to fill array with max size 100with random numbers from 1 to 100,then print average of all number*/ 
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
// Purpose: Fills an array with random integers between 1 and 100.
void FillArrayWithRandNumber(int arr[100],int& arrLength)
{
        cout<<"\n Enter how many elements will be in the array:\n";
        cin>>arrLength;
        for(int i=0;i<arrLength;i++)
        {
                arr[i]=RandNumber(1,100);
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
// Purpose: Calculates the sum of all elements in the array.
int PrintSumOfElements(int arr[100],int arrLength)
{
        int Sum=0;
        for(int i=0;i<arrLength;i++)
        {
                Sum+=arr[i];
        }
        return Sum;
}
// Purpose: Calculates the average of all elements in the array.
float PrintAverageOfElements(int arr[100],int arrLength)
{
        return (float)PrintSumOfElements(arr,arrLength)/arrLength;
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[100],arrLength;
        FillArrayWithRandNumber(arr,arrLength);
        cout<<"\nThe elements of the array are: \n";
        PrintArray(arr,arrLength);
        cout<<"\nThe sum of the elements is:\n";
        cout<<PrintSumOfElements(arr,arrLength)<<endl;
        cout<<"\nThe average of the array elements is: \n";
        cout<<PrintAverageOfElements(arr,arrLength)<<endl;
        return 0;
}