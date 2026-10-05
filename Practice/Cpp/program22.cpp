///////////////////////////////////////////
/////////////////  Hashing ////////////////
//////////////////////////////////////////

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n ;
    cin>>n;

    int Arr[n];
    // Input Array
    for(int i = 0; i <n; i++)
    {
        cin>>Arr[i];
    }

    // precompute
   map<int , int>mpp;
    for(int i =0; i<n;i++)
    {
        mpp[Arr[i]] ++;
    }

    for(auto  it : mpp)
    {
       cout<<it.first<<"->"<<it.second<<endl;
    }
    // Queries
    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
    
  return 0;
}