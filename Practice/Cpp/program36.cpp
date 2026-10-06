#include<iostream>

using namespace std;

int LineraSearch(int Arr[], int size, int key)
{
    for(int i = 0; i<= size; i++)
    {
        if(Arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int Arr[] = {1,3,5,2,5};

    int iRet = 0;
    int size = 5;
    int key = 3;
    iRet = LineraSearch(Arr,size,key);
    cout<<iRet<<endl;
    return 0;
}