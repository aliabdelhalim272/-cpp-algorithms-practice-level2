/*Write a program to fill array with max sizce 100with random numbers from 1 to 100 ,copy it to another array in reverse order and print it.*/
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
// Purpose: Copies only the prime numbers from a source array into a destination array.
void ArrayCopyWithRandomNumbers(int arrSource[100],int arrDestination[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                arrDestination[i] = arrSource[arrLength - 1 - i];
        }
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[100];
        int arrLength;
        FillArrayWithRandNumber(arr,arrLength);
        int arr2[100];
        ArrayCopyWithRandomNumbers(arr,arr2,arrLength);
        cout<<"\nArray 1 elements:\n";
        PrintArray(arr,arrLength);
        cout<<"\nArray 2 elements:\n";
        PrintArray(arr2,arrLength);
        return 0;
}