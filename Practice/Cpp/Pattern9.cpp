/*
 Input iRow = 4, iCol = 4;

 OutPut :-

    *
  ***
 *****
*******
*******
 *****
  ***
   *
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern9(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 0; i<iRow;i++)
   {
     for(j = 0; j <i;j++)
    {
        cout<<" ";
    }
    for(j = 0; j < 2*iCol - (2*i+1);j++)
    {
        cout<<"*";
    }
     for(j = 0; j <i;j++)
    {
        cout<<" ";
    }
    cout<<endl;
   }
}
void Pattern8(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 0; i<iRow;i++)
   {
     for(j = 0; j <iCol-i+1;j++)
    {
        cout<< " ";
    }
    for(j = 0; j <2*i+1;j++)
    {
        cout<<"*";
    }
     for(j = 0; j <iCol-i+1;j++)
    {
        cout<<" ";
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

    Pattern8(iRow,iCol);
    Pattern9(iRow,iCol);
    return 0;
}