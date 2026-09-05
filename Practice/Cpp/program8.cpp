/////////////////////////////////////////////////
/////////////////  Prime Numbers /////////////////
/////////////////////////////////////////////////
#include<iostream>

using namespace std;

bool Prime(int n)
{
    int i = 0;
    int iCount = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            iCount++;
        }
    }
    return iCount == 2;

}
int main()
{
    int n;
    bool bRet = false;
   cout<<"Enter Numbers:";
    cin>>n;

    bRet = Prime(n);

    if(bRet == true)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }
    return 0;
}