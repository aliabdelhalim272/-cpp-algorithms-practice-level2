/*Write a program to fill array with max size 100 with random numbers from 1 to 100 ,then print max.*/
 #include<iostream>
 #include<string>
 #include<cstdlib>
 #include<cmath>
 using namespace std;
// Purpose: Generates a random integer between two specified values (inclusive).
 int RandNumber(int From,int To)
 {
        int Rand=rand()%(To-From+1)+From;
        return Rand;
 }
// Purpose: Fills an array with a specified number of random integers between 1 and 100.
void FullArrayWithRandNUmber(int arr[100],int &arrLength)
{
        cout<<"\nEnter how many elements you need in the array:\n";
        cin>>arrLength;
        for(int i=0;i<=arrLength-1;i++)
        {
                arr[i]=RandNumber(1,100);
        }
}
// Purpose: Prints the elements of an integer array separated by spaces.
void PrintArray(int arr[100],int arrLength)
{
        for(int i=0;i<=arrLength-1;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<"\n";
}
// Purpose: Finds and returns the maximum number in the given array.
int MaxNumberOfArray(int arr[100],int arrLength)
{
        int Max=0;
        for(int i=0;i<=arrLength-1;i++)
        {
                if(arr[i]>Max)
                {
                        Max=arr[i];
                }
        }
        return Max;
}

int main()
{
        srand((unsigned)time(NULL));
        int arr[100],arrLength;
        FullArrayWithRandNUmber(arr,arrLength);
        cout<<"The array elements :\n";
        PrintArray(arr,arrLength);
        cout<<"\n The max number is:\n";
        cout<<MaxNumberOfArray(arr,arrLength)<<endl;
        return 0;
}