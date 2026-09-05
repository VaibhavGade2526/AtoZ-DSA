/////////////////////////////////////////////////
/////////////////  Reverse Numbers /////////////////
/////////////////////////////////////////////////
#include<iostream>

using namespace std;

int Reverse(int n)
{
    int Rev = 0;
    while (n>0)
    {
       int  Digit = n%10;
       Rev = (Rev *10) + Digit;
         n = n/10;
    }
    
    return Rev;
}
int main()
{
    int n = 0;
    int iRet = 0;
   cout<<"Enter Digits:";
    cin>>n;

    iRet = Reverse(n);
    cout<<"Digits"<<iRet;
    return 0;
}