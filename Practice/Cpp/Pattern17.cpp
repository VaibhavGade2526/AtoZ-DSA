/*
 Input iRow = 4, iCol = 4;

 OutPut :-

   4
   A   
  ABC  
 ABCDC 
ABCDEDC
*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void Pattern17(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 0; i<iRow;i++)
   {
     for(j = 0; j <iCol-i-1;j++)
    {
        cout<<" ";
    }
    char  ch = 'A';
    int breakpoint = (2*i+1)/2;
    for(j = 0; j <2*i+1;j++)
    {
        cout<<ch;
        if(j <= breakpoint)
        {
            ch++;
        }
        else
        {
            ch--;
        }
    }
     for(j = 0; j <iCol-i-1;j++)
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

    Pattern17(iRow,iCol);
    return 0;
}