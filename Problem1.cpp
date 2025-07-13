/*Write a program to print multiplication table from 1 to 10.*/
#include<iostream>
#include<string>
using namespace std;
void PrintHeader()
{
        cout<<"\n\n\t\t\t Multiplication table form 1 to 10.\n\n";
        cout<<"\t";
        for(int i=1;i<=10;i++)
        {
                cout<<i<<"\t";
        }
        cout<<"\n------------------------------------------------------------------------------------\n"; 
};
string ColumnSperator(int i)
{
        if (i<10)
        return"    |";
        else 
        return"   |";
};
void PrintTable()
{
        PrintHeader();
        for(int i=1;i<=10;i++)
        {
                cout<<" "<<i<<ColumnSperator(i)<<"\t";
                for(int j=1;j<=10;j++)
                {
                        cout<<i*j<<"\t";
                }
                cout<<endl;
        }
}
int main()
{
        PrintTable();
        return 0;
}