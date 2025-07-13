/*Write a program to fill array with max size 100with random numbers from 1 to 100,then print the copy only the prime number of the array */ 
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

enum enPrimeNotPrime{Prime=1,NotPrime=2};

enPrimeNotPrime CheckPrimeNumber(int Number)
{
        int M=round(Number)/2;
        for(int Counter=2;Counter<=M;Counter++)
        {
                if(Number%Counter==0)
                return enPrimeNotPrime::NotPrime;
        }
        return enPrimeNotPrime::Prime;
}
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
void ArrayCopy(int arrSource[100],int arrDestination[100],int arrlength,int &arr2Length)
{
        int Counter=0;
        for(int i=0;i<arrlength;i++)
        {
                if(CheckPrimeNumber(arrSource[i])==enPrimeNotPrime::Prime)
                {
                        arrDestination[Counter]=arrSource[i];
                        Counter++;
                }
        }
        arr2Length=--Counter;
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[100],arrLength;
        FillArrayWithRandNumber(arr,arrLength);
        int arr2[100],arr2Length;
        ArrayCopy(arr,arr2,arrLength,arr2Length);
        cout<<"\nThe elements of the first array are: \n";
        PrintArray(arr,arrLength);
        cout<<"\nThe elements of the second array are: \n";
        PrintArray(arr2,arr2Length);
        return 0;
}