#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int majorityElement(vector<int> v)
{
    map<int,int>mpp;

    for(int i = 0; i < v.size();i++)
    {
        mpp[v[i]]++;
    }
    for(auto it : mpp)
    {
        if(it.second> (v.size()/2))
        {
            return it.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {2,2,1,1,1,2,2};

    int ans = majorityElement(v);

    cout<<"Majority Element = "<<ans<<endl;

    return 0;
}

