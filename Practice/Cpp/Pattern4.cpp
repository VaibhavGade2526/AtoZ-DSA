/*
 Input iRow = 5, iCol = 5;

 OutPut :-
1 
2 2
3 3 3
4 4 4 4
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern2(int iRow, int iCol)
{
    int i = 1, j = 0;

    for(i = 1; i<iRow;i++)
   {
    for(j = 0; j <=i;j++)
    {
        cout<<i<<" "; 
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