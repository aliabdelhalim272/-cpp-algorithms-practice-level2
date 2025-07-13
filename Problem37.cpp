/*Write a program to fill array with max size 100 with random numbers from 1 to 100,copy it to another using AddArrayElement,and print it.*/
#include<iostream>
#include<cstdlib>
using namespace std;
// Purpose: Generates a random integer within the inclusive range [From, To].
int RandomNumber(int From,int To)
{
        int Rand=0;
        return Rand=rand()%(To-From+1)+From;
}
// Purpose: Fills an integer array with random numbers between 1 and 100.
void FillArrayWithRandomNumber(int arr[100],int &arrLength)
{
        cout<<"\nEnter how many elements will be in the array:\n";
        cin>>arrLength;
        for(int i=0;i<arrLength;i++)
        {
                arr[i]=RandomNumber(1,100);
        }
}
// Purpose: Prints the elements of an integer array separated by spaces.
void PrintArray(int arr[100],int arrLenght)
{
        for(int i=0;i<arrLenght;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<"\n";
}
// Purpose: Adds a new element to the end of an array, updating its length.
void AddArrayElement(int Number,int arr[100],int &arrLength)
{
        arrLength++;
        arr[arrLength-1]=Number;
}
// Purpose: Copies elements from a source array to a destination array using AddArrayElement,
//          which automatically updates the destination array's length.
void CopyArrayUsingAddArrayElement(int arrSource[100],int arrDestination[100],int arrLength,int&arrDestinationLength)
{
        for(int i=0;i<arrLength;i++)
        {
                AddArrayElement(arrSource[i],arrDestination,arrDestinationLength);
        }
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[100];
        int arrLength=0;
        int arr2Length=0;
        FillArrayWithRandomNumber(arr,arrLength);
        int arr2[100];
        CopyArrayUsingAddArrayElement(arr,arr2,arrLength,arr2Length);
        cout<<"\nArray 1 elements:\n";
        PrintArray(arr,arrLength);
        cout<<"\nArray 2 elements after copy:\n";
        PrintArray(arr,arrLength);
        return 0;
}