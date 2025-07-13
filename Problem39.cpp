/*Write a program to fill array with max size 100 with random numbers from 1 to 100,copy only prime numbers to another arrays using ADDArrayElement,and print it.*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
// Purpose: Classifies a number as either Prime or NotPrime.
enum enPrimeNotPrime{Prime=1,NotPrime=2}; 
// Purpose: Checks whether a given number is prime.
enPrimeNotPrime CheckPrime(int Number)
{
        int M=round(Number/2);
        for(int Counter=2;Counter<=M;Counter++)
        {
                if(Number%Counter==0)
                return enPrimeNotPrime::NotPrime;
        }
        return enPrimeNotPrime::Prime;
}

/*
enPrimeNotPrime CheckPrime(int Number)
{
    if (Number < 2)
        return NotPrime;

    for (int Counter = 2; Counter <= sqrt(Number); Counter++)
    {
        if (Number % Counter == 0)
            return NotPrime;
    }

    return Prime;
}
*/

// Purpose: Generates a random integer within the inclusive range [From, To].
int RandomNumber(int From,int To)
{
        int Rand=0;
        return Rand=rand()%(To-From+1)+From;
}
// Purpose: Fills an array with random integers between 1 and 100.
void FillArrayWithRandomNumbers(int arr[100],int&arrLength)
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
// Purpose: Adds a new element to the end of an array and updates its length.
void AddArrayElement(int Number,int arr[100],int&arrLength)
{
        arrLength++;
        arr[arrLength-1]=Number;
}
// Purpose: Copies only the prime numbers from a source array into a destination array.
void CopyPrimeNumbers(int arrSource[100],int arrDestination[100],int arrLength,int&arrDestinationLength)
{
        for(int i=0;i<arrLength;i++)
        {
                if(CheckPrime(arrSource[i])==enPrimeNotPrime::Prime)
                {
                        AddArrayElement(arrSource[i],arrDestination,arrDestinationLength);
                }
        }
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[100];
        int arrLength=0;
        int arr2[100];
        int arr2Length=0;
        FillArrayWithRandomNumbers(arr,arrLength);
        CopyPrimeNumbers(arr,arr2,arrLength,arr2Length);
        cout<<"\nArray 1 elements:\n";
        PrintArray(arr,arrLength);
        cout<<"\nArray 2 prime elements:\n";
        PrintArray(arr2,arr2Length);
        return 0;
}