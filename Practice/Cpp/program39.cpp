#include<iostream>

using namespace std;

int MissingArray(int Arr[],int n)
{
    for(int i = 1; i<n; i++)
    {
       int   bFlag = 0;
        for(int j = 0; j<n-1; j++)
        {
            if(Arr[j] == i)
            {
                bFlag =1;
                break;
            }
        }
        if(bFlag == 0)
        {
            return i;
        }
    }
}
int main()
{
    return;
}  