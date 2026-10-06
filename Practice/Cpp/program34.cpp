//////////////////////////////////////////////////////////
//////////////////// MMove 0 to End of Array  ///////////
////////////////////////////////////////////////////////
#include<iostream>
#include <vector>

using namespace std;

void MoveZero(int Arr[],int n)
{
    vector<int> temp;
    for(int i = 0; i <n;i++)
    {
        if(Arr[i]!= 0)
        {
            temp.push_back(Arr[i]);
        }
    }
    //step 2
    int nz = temp.size();
    for(int i = 0 ; i < nz;i++)
    {
        Arr[i] = temp[i];
    }
    // Step 3
    for(int i = nz; i<n; i++)
    {
        Arr[i] = 0;
    }
}
int main()
{ 
    int Arr[] = {1, 0, 2, 0, 3, 0, 4};
    int n = 7;

      MoveZero(Arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}