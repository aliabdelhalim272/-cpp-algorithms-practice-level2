/*Write a program to fill array with numbers,then check if it is palindrome array or not,Note:Palindrome array can be read the same from rigth to left and from left to rigth.*/
#include<iostream>
#include<string>
using namespace std;
// Purpose: Initializes an array with a fixed set of values.
void FillArray(int arr[100],int&arrLength)
{
        arrLength=6;
        arr[0]=10;
        arr[1]=20;
        arr[2]=30;
        arr[3]=30;
        arr[4]=20;
        arr[5]=10;
} 
// Purpose: Prints the elements of an array, separated by spaces.
void PrintArray(int arr[100],int arrLength)
{
        for(int i=0;i<arrLength;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<"\n";
}
// Purpose: Checks whether the array is a palindrome.
bool IsPalindromeNumber(int arr[100],int Length)
{
        for(int i=0;i<Length;i++)
        {
                if(arr[i]!=arr[Length-i-1])
                {
                        return false;
                }
        }
        return true;
}
int main()
{
        int arr[100];
        int Length=0;
        FillArray(arr,Length);
        cout<<"\nArray elements:\n";
        PrintArray(arr,Length);
        if(IsPalindromeNumber(arr,Length))
        cout<<"\nYes,array is palindrome.\n";
        else 
        cout<<"\nNo,array is not plaindrome.\n";
        return 0;
}