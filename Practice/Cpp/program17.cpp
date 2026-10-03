/////////////////////////////////////////////////
///////////////// Reverse Array using Recursion //
/////////////////////////////////////////////////
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void  ReverseArr( int Arr[],int l, int r)
{
    if(l>=r)
    {
      return ;
    }
    swap(Arr[l],Arr[r]);
     ReverseArr(Arr,l+1,r-1);
}
int main()
{
    int n;
    cin>>n;

    int Arr[n];

    for(int i = 0; i < n; i++)
    {
      cin>>Arr[i];
    }

   ReverseArr(Arr,0,n-1);

   for(int i = 0; i< n; i++)
   {
    cout<<Arr[i]<<" ";
   }
   cout<<endl;
    return 0;
}