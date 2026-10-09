/*
 Input iRow = 4, iCol = 4;

 OutPut :-
* * * *
* * * 
* * 
*
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern1(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i<=iRow;i++)
   {
    for(j = 1; j <=iCol-i+1;j++)
    {
        cout<<"*";
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

    Pattern1(iRow,iCol);
    return 0;
}