/*
 Input iRow = 4, iCol = 4;

 OutPut :-
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern19(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iniS = 0;
    for(i = 0; i<iRow;i++)
   {
    // starts
     for(j = 1;j<=iCol-i;j++)
    {
        cout<<"*";
    }
    // space
    for(j = 0;j<iniS;j++)
    {
        cout<<" ";
    }
    //start
    for(j = 1; j <= iCol-i;j++)
    {
        cout<<"*";
    }
    iniS += 2;
    cout<<endl;
}
 iniS = 2*(iCol-1);
for(i = 1; i<=iRow;i++)
{
    // starts
     for(j = 1;j<=i;j++)
    {
        cout<<"*";
    }
    // space
    for(j = 0;j<iniS;j++)
    {
        cout<<" ";
    }
    //start
    for(j = 1; j <=i;j++)
    {
        cout<<"*";
    }
    iniS -= 2;
    cout<<endl;
}
}
int main()
{
    int iRow = 0, iCol = 0;

    cout<<"Enter the Rows:"<<endl;
    cin>>iRow;
    cout<<"Enter the Columns:"<<endl;
    cin>>iCol;

    Pattern19(iRow,iCol);
    return 0;
}