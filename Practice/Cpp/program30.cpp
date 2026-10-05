//////////////////////////////////////////////////////////
//////////////////// Check Array Sorted Or Not////////////
////////////////////////////////////////////////////////
#include<iostream>

using namespace std;

bool Sorted(int Arr[],int n)
{
    for(int i = 1; i<n;i++)
    {
        if(Arr[i]<Arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int Arr[] = {2,3,4,5};
    bool bRet = false;
    bRet = Sorted(Arr,5);
    if(bRet == true)
    {
        cout<<"Array is Sorted.."<<endl;
    }
    else
    {
        cout<<"Array is not Sorted.."<<endl;
    }
    return 0;
}