/*Write a program to fill array with numbers, then print distinct numbers to another array.*/
#include<iostream>
#include<string>
using namespace std;
// Purpose: Initializes the source array with predefined numbers, some of which are duplicates.
void FillArray(int arr[100],int&arrLength)
{
        arrLength=10;
        arr[0]=10;
        arr[1]=10;
        arr[2]=10;
        arr[3]=50;
        arr[4]=50;
        arr[5]=70;
        arr[6]=70;
        arr[7]=70;
        arr[8]=70;
        arr[9]=90;
}
// Purpose: Prints the elements of an integer array, separated by spaces.
void PrintArray(int arr[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<"\n";
}
// Purpose: Searches for a given number in an array and returns its index if found.
short FindNumberPositionInArray(int Number,int arr[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                if(arr[i]==Number)
                return i;
        }
        return -1;
}
// Purpose: Determines if a given number exists in an array.
bool IsNumberInArray(int Number,int arr[100],int arrLength)
{
        return FindNumberPositionInArray(Number,arr,arrLength)!=-1;
}
// Purpose: Adds a new element to the end of an array and updates its length.
void AddArrayElement(int Number,int arr[100],int&arrLength)
{
        arrLength++;
        arr[arrLength-1]=Number;
}
// Purpose: Copies only distinct (non-duplicate) numbers from the source array to the destination array.
void CopyDistinctNumbersToArray(int arrSource[100],int arrDestination[100],int SourceLength,int&DestinationLength)
{
        for(int i=0;i<SourceLength;i++)
        {
        if(!IsNumberInArray(arrSource[i],arrDestination,DestinationLength))
        {
                AddArrayElement(arrSource[i],arrDestination,DestinationLength);
        }
        }
}
int main()
{
        int arrSource[100],SourceLength=0,arrDestination[100],DestinationLength=0;
        FillArray(arrSource,SourceLength);
        cout<<"\nArray 1 elements:\n";
        PrintArray(arrSource,SourceLength);
        CopyDistinctNumbersToArray(arrSource,arrDestination,SourceLength,DestinationLength);
        cout<<"\n Array 2 distinc element:\n";
        PrintArray(arrDestination,DestinationLength);
        return 0;
}