/*
 Input iRow = 4, iCol = 4;

 OutPut :-

E 
D E 
C D E 
B C D E 
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern17(int iRow, int iCol)
{
    int i = 0;
    char j = '\0';

    for(i = 0; i<iRow;i++)
   {
     for(j = 'E'-i; j<='E';j++)
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

    Pattern17(iRow,iCol);
    return 0;
}