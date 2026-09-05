/////////////////////////////////////////////////
/////////////////  Palindrome Numbers /////////////////
/////////////////////////////////////////////////
#include<iostream>

using namespace std;

bool Palindrome(int n)
{
    int Rev = 0;
    int dup = n;
    while (n>0)
    {
       int  Digit = n%10;
       Rev = (Rev *10) + Digit;
         n = n/10;
    }
    if( dup == Rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n = 0;
    bool bRet = false;
   cout<<"Enter Digits:";
    cin>>n;

    bRet = Palindrome(n);
    if(bRet == true)
    {
        cout<<"Number is palindrome";
    }
    else
    {
        cout<<"Number is not palindrome";
    }
    return 0;
}