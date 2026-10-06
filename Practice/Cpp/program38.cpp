/////////////////////////////////////////////
/////// Intersectio sorted Array/////////////
/////////////////////////////////////////////
#include<iostream>
#include<vector>
#include<set>

using namespace std;

vector<int> sortedInsertionAray(vector<int>&Arr, vector<int>&Brr,int m,int n)
{
    vector<int> ans;
    int vis[m] = {0};
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<m;j++)
        {
            if(Arr[i] == Brr[j] && vis[j] == 0)
            {
                ans.push_back(Arr[i]);
                vis[j] = 1;
                break;
            }
            if(Brr[j]> Arr[i])
            {
                break;
            }
        }
    }
    return ans;
}
int main()
{
  vector<int> Arr = {1, 2, 3, 4};
    vector<int> Brr = {2, 3, 5, 6};

    int n = Arr.size();
    int m = Brr.size();

    vector<int> result = sortedInsertionAray(Arr, Brr, m, n);

    for(auto x : result)
    {
        cout << x << " ";
    }

    return 0;
}