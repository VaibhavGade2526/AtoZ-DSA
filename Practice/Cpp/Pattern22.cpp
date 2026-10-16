/*
 Input iRow = 4, iCol = 4;

 OutPut :-
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern19(int iRow, int iCol)
{
    int i = 0, j = 0;
  
for(i =0; i<2*iRow-1;i++)
{
    for(j =0;j<2*iCol-1;j++)
    {
        int top = i;
        int left = j;
        int right = (2*iRow- 2)-j;
        int down = (2*iCol - 2) - i;
        cout<<(iRow-min(min(top,down),min(left,right)));
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