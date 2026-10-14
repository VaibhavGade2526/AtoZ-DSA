/*
 Input iRow = 4, iCol = 4;

 OutPut :-
*       *
**     **
***   ***
**** ****
***   ***
**     **
*       *
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern19(int iRow, int iCol)
{
    int i = 0, j = 0;
    int Spaces = 2*iRow - 2;
  
for(i = 1; i<=2*iRow-1;i++)
{
    int Stars = i;

    if(i>iRow)
    {
        Stars = 2*iRow - i;
    }
    // starts
     for(j = 1;j<=Stars;j++)
    {
        cout<<"*";
    }
    // space
    for(j = 0;j<=Spaces;j++)
    {
        cout<<" ";
    }
    //start
     for(j = 1;j<=Stars;j++)
    {
        cout<<"*";
    }
    cout<<endl;

    if(i < iCol)
    {
        Spaces -= 2;   
    }
    else
    {
        Spaces += 2;
    }
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