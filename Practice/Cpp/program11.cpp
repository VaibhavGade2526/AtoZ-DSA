/////////////////////////////////////////////////
/////////////////  Recursion (Basic to Advanced) /////////////////
/////////////////////////////////////////////////
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int iCnt = 0;
void print()
{
    if(iCnt == 3)
    {
        return;
    }
    cout<<iCnt<<endl;
    iCnt++;
    print();
}
int main()
{
    print();
    return 0;
}