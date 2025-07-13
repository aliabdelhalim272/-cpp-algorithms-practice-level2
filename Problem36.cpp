/*Write a program to dynamically read numbers and save them in ana array max size of array is 100,allocate simi dynamic array length.*/
 #include<iostream>
 using namespace std;
 // Purpose: Prompts the user to enter a number and returns the entered number.
 int ReadNumber()
 {
        int Number=0;
        cout<<"\nPlease enter a number:\n";
        cin>>Number;
        return Number;
 }
 // Purpose: Adds a new element to the array.
 void AddArrayElement(int Number,int arr[100],int &arrLength)
 {
        arrLength++;
        arr[arrLength-1]=Number;
 }
 // Purpose: Allows the user to input numbers into an array until they choose to stop.
 void InputUserNumberInArray(int arr[100],int arrLength)
 {
        bool AddMore=true;
        do 
        {
                AddArrayElement(ReadNumber(),arr,arrLength);
                cout<< "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
                cin>>AddMore;
        }while(AddMore);
 }
 // Purpose: Prints all the elements of an array separated by spaces.
 void PrintArray(int arr[100],int arrLength)
 {
        for(int i=0;i<arrLength;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<"\n";
 }
 int main()
 {
        int arr[100];
        int arrLength=0;
        InputUserNumberInArray(arr,arrLength);
        cout<<"\nArray length: "<<arrLength<<endl;
        cout<<"\nArray elements:\n";
        PrintArray(arr,arrLength);
        return 0;
 }