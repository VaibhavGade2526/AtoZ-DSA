/*
 Input iRow = 4, iCol = 4;

 OutPut :-
****
*  *
*  *
****
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern19(int iRow, int iCol)
{
    int i = 0, j = 0;
  
for(i =0; i<iRow;i++)
{
    for(j =0;j<iCol;j++)
    {
        if(i == 0|| j == 0|| i == iRow-1 || j == iRow-1)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
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