//////////////////////////////////////////////////////////
//////////////////// Left Rotate Array By One ///////////
////////////////////////////////////////////////////////
#include<iostream>

using namespace std;

int  LeftRotateArrOne(int Arr[],int n)
{
    int temp = Arr[0];
    for(int i = 1; i<n;i++)
    {
        Arr[i-1] = Arr[i];
    }
    Arr[n-1] =  temp;
}
int main()
{
    int Arr[] = {1,2,3,4,5};
    LeftRotateArrOne(Arr,5);
    cout << "Rotated Array: ";

    for(int i = 0; i < 5; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}