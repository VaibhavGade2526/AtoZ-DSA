///////////////////////////////////////////
/////////////////  Sorting ////////////////
///////////////// Merge Sorting/////////

#include<iostream>

using namespace std;

void Insertion_Sort(int Arr[], int n)
{
    int  i = 0,j = 0,Selected = 0;
   
    for(int i = 1; i < n; i++)
    {
        Selected = Arr[i];
        for(j = i-1;(j>=0) &&(Arr[j]>Selected);j--)
        {
            Arr[j+1] = Arr[j];
        }
        Arr[j+1] = Selected;
        // Pass Display
        cout<<"Pass"<<i+1<<": ";

        for(int k = 0; k <n; k++)
        {
            cout<<Arr[k]<<" ";
        }
        cout<<endl;
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
     Insertion_Sort(Arr,n);
    cout<<"Final Sorting :";
    for(int i = 0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}