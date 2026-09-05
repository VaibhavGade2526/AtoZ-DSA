/////////////////////////////////////////////////
/////////////////  Count Digits /////////////////
/////////////////////////////////////////////////
#include<iostream>

using namespace std;

int Count(int n)
{
    int iCnt = 0;

    while (n>0)
    {
       int  Digit = n%10;
       iCnt = iCnt+1;
         n = n/10;
    }
    
    return iCnt;
}
int main()
{
    int n = 0;
    int iRet = 0;
   cout<<"Enter Digits:";
    cin>>n;

    iRet = Count(n);
    cout<<"Digits"<<iRet;
    return 0;
}