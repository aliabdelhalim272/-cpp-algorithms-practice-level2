/*Write a program to print 3 random numbers from 1 to 10.*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int RandNumber(int From,int To)
{
        int RandNum=rand()%(To-From+1)+From;
        return RandNum;
}

int main()
{
        srand((unsigned)time(NULL));
        cout<<RandNumber(1,10)<<endl;
        cout<<RandNumber(1,10)<<endl;
        cout<<RandNumber(1,10)<<endl;
        return 0;
}