//////////////////////////////////////////////////////////
//////////////////// Left Rotate Array By L Place ///////////
////////////////////////////////////////////////////////
#include<iostream>

using namespace std;

int  LeftRotate(int Arr[],int n,int d)
{
    d = d%n;

    int temp[d];
    for(int i = 0; i< d; i++)
    {
        temp[i] = Arr[i];
    }

    for(int i = d; i < n; i++)
    {
        Arr[i-d] = Arr[i];
    }
    for(int i = n - d; i < n; i++)
    {
        Arr[i] = temp[i-(n-d)];
    }
}
int main()
{
    int n ;
    cin>>n;
    int Arr[n];
    for(int i = 0;i< n; i++)
    {
        cin>>Arr[i];
    }
    int d;
    cin>>d;
    LeftRotate(Arr,n,d);
    for(int i = 0; i < n; i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}