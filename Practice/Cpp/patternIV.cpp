// Row = 4; Col = 4
/*
1 
2 3 
3 4 5 
4 5 6 7
*/
#include<iostream>

using namespace std;

void Pattern(int n,int m)
{
    for(int i = 1; i<= n;i++)
    {
        int val = i;
        for(int j = 1; j<=i;j++)
        {
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
    }
}
int main()
{
    int n = 0, m = 0;
    cout<<"Enter the Ro:"<<endl;
    cin>>n;
    cout<<"Enter the Col:";
    cin>>m;
    Pattern(n,m);
    return 0;
}