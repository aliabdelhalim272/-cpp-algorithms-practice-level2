/*ًwrite a program read a number,then print all digits frequency in that number.*/
#include<iostream>
 #include<string>
 using namespace std;
int ReadNumber(string Message)
{
        int Number=0;
        do 
        {
                cout<<Message<<endl;
                cin>>Number;
        }while(Number<=0);
        return Number;
};
int ContDigitsFrequency(int Number,short DigitsToCheck)
{
        int Remainder=0;
        int FreqCount=0;
        while(Number>0)
        {
                Remainder=Number%10;
                Number=Number/10;
                if(DigitsToCheck==Remainder)
                {
                        FreqCount++;
                }
        }
        return FreqCount;
};
void PrintAllDigitsFrequencey(int Number)
{
        cout<<endl;
        for(int i=0;i<10;i++)
        {
                short DigitFrequency=0;
                DigitFrequency=ContDigitsFrequency(Number,i);
                if(DigitFrequency>0)
                {
                        cout<<"Digit "<<i<<" Frequencey is "<<DigitFrequency<<" Time(s).\n";
                }
        }
}
int main()
{
        int Number=ReadNumber("Enter the main number of digits: ");
        PrintAllDigitsFrequencey(Number);
        return 0;
}