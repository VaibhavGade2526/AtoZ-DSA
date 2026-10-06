//////////////////////////////////////////////////////////
//////////////////// Duplicate remove ///////////////
////////////////////////////////////////////////////////
#include<iostream>

using namespace std;

int  DublicateRemove(int Arr[],int n)
{
    int i = 0;
    for(int j = 1; j<n;j++)
    {
        if(Arr[i] != Arr[j])
        {
            Arr[i+1] = Arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    int Arr[] = {1,1,2,2,3,3,4};
    int iRet = 0;
    iRet = DublicateRemove(Arr,5);
    cout<<"Duplicate Number :"<<iRet<<endl;
    return 0;
}