///////////////////////////////////////////
/////////////////  Sorting ////////////////
/////////////////Selection Sorting/////////

#include<iostream>

using namespace std;

void Selection_Sort(int Arr[], int n)
{
    int  i = 0,j = 0,min = 0;
   
    for(int i = 0; i < n-1; i++)
    {
        min = i;

        for(j =i+1;j<=n;j++)
        {
            if(Arr[j]<Arr[min])
            {
                min = j;
            }
        }
           int temp = Arr[i];
           Arr[i] = Arr[min];
           Arr[min] = temp;
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
    Selection_Sort(Arr,n);
    cout<<"Final Sorting :";
    for(int i = 0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}