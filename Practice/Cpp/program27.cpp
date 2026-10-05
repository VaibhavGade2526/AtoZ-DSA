///////////////////////////////////////////
/////////////////  Sorting ////////////////
///////////////// Quick Sorting/////////

#include<iostream>

using namespace std;

int Quick(int Arr[],int low , int high)
{

    int Pivot = Arr[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        // Move i Forward
        while(Arr[i]<= Pivot && i<= high-1)
        {
            i++;
        }
        // Move j Backward
        while(Arr[j]>Pivot && j >= low+1)
        {
            j--;
        }
        // swap
        if(i<j)
        {
            swap(Arr[i],Arr[j]);
        }
    }
    // pivot in the correct postion
    swap(Arr[low],Arr[j]);
    return j;
    
}
void Quick_Sort(int Arr[], int low , int high)
{
    if(low<high)
    {
        
       int partion = Quick(Arr,low,high);
        Quick_Sort(Arr,low,partion-1);
        Quick_Sort(Arr,partion+1,high);

    }
}
int main()
{
    int n;
    cout<<"Enter number of Elements :"<<endl;
    cin>>n;
    int Arr[n];
    for(int i = 0; i <n;i++)
    {
        cin>>Arr[i];
    }
     Quick_Sort(Arr,0,n-1);
    cout<<"Final Sorting :";
    for(int i = 0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}