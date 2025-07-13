/*Write a program to read how many keys to generate and print them on the screen.*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
enum enCharType
 {
        SmallLetter=1,
        CapitalLetter=2,
        SpecialCharacter=3,
        Digit=4
 };
int RandomNumber(int From,int To)
 {
        int RandNumber=rand()%(To-From+1)+From;
        return RandNumber;
 };
 int ReadPositiveNumber(string Message)
 {
        int Number=0;
        do 
        {
                cout<<Message<<endl;
                cin>>Number;
        }while(Number<=0);
        return Number;
 }

 char GetRandomCharacter(enCharType CharType)
 {
        switch(CharType)
        {
                case enCharType::SmallLetter:
                {
                        return char(RandomNumber(97,122));
                        break;
                }
                case enCharType::CapitalLetter:
                {
                        return char(RandomNumber(65,90));
                        break;
                }
                case enCharType::SpecialCharacter:
                {
                        return char(RandomNumber(33,47));
                        break;
                }
                case enCharType::Digit:
                {
                        return char(RandomNumber(48,57));
                        break;
                }
        }
        return '\0';
 }

 string GenerateWord(enCharType CharType,short Length)
 {
        string Word;
        for(int i=1;i<=Length;i++)
        {
                Word=Word+GetRandomCharacter(CharType);
        }
        return Word;
 }
 string GenerateKey()
 {
        string Key="";
        Key=GenerateWord(enCharType::CapitalLetter,4)+"-";
        Key=Key+GenerateWord(enCharType::CapitalLetter,4)+"-";
        Key=Key+GenerateWord(enCharType::CapitalLetter,4)+"-";
        Key=Key+GenerateWord(enCharType::CapitalLetter,4);
        return Key;
 }
 void GenerateKeys(short NumberOfKeys)
 {
        for(int i=1;i<=NumberOfKeys;i++)
        {
                cout<<"Key[ "<<i<<" ]: ";
                cout<<GenerateKey()<<endl;
        }
 }
 int main()
 {
        srand((unsigned)time(NULL));
        GenerateKeys(ReadPositiveNumber("\nEnter how many keys to generate: \n"));
        return 0;
 }