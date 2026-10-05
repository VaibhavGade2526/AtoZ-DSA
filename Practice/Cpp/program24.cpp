///////////////////////////////////////////
/////////////////  Sorting ////////////////
/////////////////Bubble Sorting/////////

#include<iostream>

using namespace std;

void Bubble_Sort(int Arr[], int n)
{
    int  i = 0,j = 0;
   
    for(int i = 0; i < n-1; i++)
    {
        for(j = 0;j<=n-1-i;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                int temp = Arr[j+1];
                Arr[j+ 1] = Arr[j];
                Arr[j] = temp;
            }
        }
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
     Bubble_Sort(Arr,n);
    cout<<"Final Sorting :";
    for(int i = 0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}