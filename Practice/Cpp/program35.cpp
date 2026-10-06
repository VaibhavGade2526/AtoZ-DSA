//////////////////////////////////////////////////////////
//////////////////// MMove 0 to End of Array  ///////////
////////////////////////////////////////////////////////
#include<iostream>
#include <vector>

using namespace std;

vector<int> MoveZero(vector<int> Arr,int n)
{
    int j = -1;
    for(int i = 0; i <n;i++)
    {
        if(Arr[i]== 0)
        {
          j = i;
          break;
        }
    }
    // no no zero numbers

    if(j == -1)
    {
        return Arr;
    }
    for(int i = j+1;i<n;i++)
    {
        if(Arr[i]!= 0)
        {
            swap(Arr[i],Arr[j]);
            j++;
        }
    }
    return Arr;

}
int main()
{ 
    vector<int> Arr = {1, 0, 2, 0, 3, 0, 4};
    int n = Arr.size();

    Arr = MoveZero(Arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;

    return 0;
}