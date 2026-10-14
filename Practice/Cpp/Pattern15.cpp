/*
 Input iRow = 4, iCol = 4;

 OutPut :-
A B C D 
A B C 
A B 
A 
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern12(int iRow, int iCol)
{
    int i = 0;
    char j = '\0';
    for(i = 0; i<iRow;i++)
   {
    for(j = 'A'; j <= 'A'+ (iCol - i-1);j++)
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

    Pattern12(iRow,iCol);
    return 0;
}