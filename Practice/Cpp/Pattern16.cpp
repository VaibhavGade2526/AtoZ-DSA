/*
 Input iRow = 4, iCol = 4;

 OutPut :-
A 
B B 
C C C 
D D D D 
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern12(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    for(i = 0; i<iRow;i++)
   {
    char ch = 'A' +i;
    for(j = 0; j <= i;j++)
    {
        cout<<ch<<" ";
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