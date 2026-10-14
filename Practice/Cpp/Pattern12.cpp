/*
 Input iRow = 4, iCol = 4;

 OutPut :-
1 1
12 21
123 321
1234 4321
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern11(int iRow, int iCol)
{
    int i = 0, j = 0;

    int space =  2* (iRow-1);
    for(i = 1; i<=iRow;i++)
   {
    // Numnber
    for(j = 1; j <=i;j++)
    {
        cout<<j;
    }
    // space
    for( j = 1;j<=space;j++);
    {
        cout<<" ";
    }
    // numbers
    for(j = i; j>=1;j--)
    {
        cout<<j;
    }
    cout<<endl;
    space -=2;
   }
}
int main()
{
    int iRow = 0, iCol = 0;

    cout<<"Enter the Rows:"<<endl;
    cin>>iRow;
    cout<<"Enter the Columns:"<<endl;
    cin>>iCol;

    Pattern11(iRow,iCol);
    return 0;
}