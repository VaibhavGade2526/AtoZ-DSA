/////////////////////////////////////////////////
/////////////////  HCF GCD Numbers /////////////////
/////////////////////////////////////////////////
#include<iostream>

using namespace std;

int  GCD(int n1,int n2)
{
    int i = 0;
    int gcd = 1;
    for(int i = 1; i <= min(n1,n2); i++)
    {
        if(n1%i == 0 && n2 %i == 0)
        {
            gcd = i;
        }
    }
    return gcd;

}
int main()
{
    int n1,n2;
  int iRet = false;
   cout<<"Enter  two Numbers:";
    cin>>n1>>n2;

    iRet = GCD(n1,n2);
    cout<<"HCF/ GCD is :"<<iRet<<endl;
    return 0;
}