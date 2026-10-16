// Row = 4; Col = 4
/*
 
A A A A 
B B B B 
C C C C 
D D D D
*/
#include<iostream>

using namespace std;

void Pattern(int n,int m)
{
    for(int i = 1; i<= n;i++)
    {
        for(int j = 1; j<=m;j++)
        {
            char ch = 'A' + i-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n = 0, m = 0;
    cout<<"Enter the Ro:"<<endl;
    cin>>n;
    cout<<"Enter the Col:"<<endl;
    cin>>m;
    Pattern(n,m);
    return 0;
}