/*Write a program to fill array with max size 100with random numbers from 1 to 100,then print the copy of the array */ 
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
// Purpose: Copies the elements from the source array to the destination array.
void ArrayCopy(int arrSource[100],int arrDestination[100],int arrlength)
{
        for(int i=0;i<arrlength;i++)
        {
                arrDestination[i]=arrSource[i];
        }
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[100],arrLength;
        FillArrayWithRandNumber(arr,arrLength);
        int arr2[100];
        ArrayCopy(arr,arr2,arrLength);
        cout<<"\nThe elements of the first array are: \n";
        PrintArray(arr,arrLength);
        cout<<"\nThe elements of the second array are: \n";
        PrintArray(arr,arrLength);
        return 0;
}