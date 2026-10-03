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
    int hash[13] = {0};
    for(int i =0; i<n;i++)
    {
        hash[Arr[i]] += 1;
    }

    // Queries
    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cout<<"Enter the Queries:";
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }
    
  return 0;
}