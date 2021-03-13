#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=n;
    int arr[n];
   for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            res--;
           swap(arr[i],arr[res]);

           continue;
        }
        else
            continue;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];
}

