//////////////////////////////////////////////////////////
////////////////////Largest Elements in array////////////
////////////////////////////////////////////////////////
#include<iostream>

using namespace std;

int Largest(int Arr[],int n)
{
   int  Largest = Arr[0];
    for(int i = 0; i<n;i++)
    {
        if(Arr[i]>Largest)
        {
            Largest = Arr[i];
        }
    }
     return Largest;
}
int main()
{
    int Arr[] = {2,3,1,4,5};
    int iRet = 0;
    iRet = Largest(Arr,5);
    cout<<"Largest Number is :"<<iRet<<endl;
    return 0;
}