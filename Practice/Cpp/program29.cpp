//////////////////////////////////////////////////////////
//////////////// SecondLargest Elements in array/////////
////////////// SecondSmallest Elements in Array /////////
////////////////////////////////////////////////////////
#include<iostream>
#include <climits>

using namespace std;

int SecondLargest(int Arr[],int n)
{
   int  Largest = Arr[0];
   int SecondLargest = -1;
    for(int i = 1; i<n;i++)
    {
        if(Arr[i]>Largest)
        {
            SecondLargest = Largest;
            Largest = Arr[i]; 
        }
        else if(Arr[i]<Largest && Arr[i]>SecondLargest)
        {
            SecondLargest = Arr[i];
        }
    }
     return SecondLargest;
}
int SecondSmallest(int Arr[],int n)
{
   int Smallest = Arr[0];
   int SecondSmallest = -1;
    for(int i = 1; i<n;i++)
    {
        if(Arr[i]<Smallest)
        {
            SecondSmallest= Smallest;
            Smallest = Arr[i]; 
        }
        else if(Arr[i]!= Smallest && Arr[i]<SecondSmallest)
        {
            SecondSmallest= Arr[i];
        }
    }
     return SecondSmallest;
}
int main()
{
    int Arr[] = {2,3,1,4,5,5};
    int iRet = 0;
    iRet = SecondLargest(Arr,6);
    cout<<"Second Largest Number is :"<<iRet<<endl;
    iRet = SecondSmallest(Arr,6);
    cout<<"Second Smallest Number is :"<<iRet<<endl;
    return 0;
}