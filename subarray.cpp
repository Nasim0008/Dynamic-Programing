#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    //print all the subarray
    cout<< "{ }"<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            cout<< "{ ";
            for(int k=i;k<=j;k++)
            {
                cout<< arr[k]<< " ";
            }
            cout<< "}"<<endl;
        }
    }
}