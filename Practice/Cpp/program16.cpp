/////////////////////////////////////////////////
///////////////// sum of 1 st N Number //
/////////////////////////////////////////////////
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int Sum( int n)
{
    if( n == 0)
    {
     return 0;
    }
    return n + Sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    int iRet = 0;
   iRet =  Sum(n);
   cout<<iRet<<endl;
    return 0;
}