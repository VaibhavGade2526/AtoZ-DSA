/*
 Input iRow = 4, iCol = 4;

 OutPut :-
1 
1 2
1 2 3
1 2 3 4
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern2(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i<iRow;i++)
   {
    for(j = 1; j <=i;j++)
    {
        cout<<j<<" "; 
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

    Pattern2(iRow,iCol);
    return 0;
}