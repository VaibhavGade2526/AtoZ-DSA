/*
 Input iRow = 4, iCol = 4;

 OutPut :-
1 
2 3 
4 5 6 
7 8 9 10 
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern12(int iRow, int iCol)
{
    int i = 0, j = 0;
    int inum = 1;
    for(i = 1; i<=iRow;i++)
   {
    for(j = 1; j <=i;j++)
    {
        cout<<inum<<" ";
        inum++;
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

    Pattern12(iRow,iCol);
    return 0;
}