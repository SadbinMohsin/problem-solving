#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    //int a[n];
    for(auto&i:arr)
        cin>>i;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                cout<<arr[i]<<" ";
            }
            else
            {
                cout<<(arr[i]^arr[i-1])<<" ";
            }
        }

}
