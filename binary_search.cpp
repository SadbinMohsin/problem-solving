#include<bits/stdc++.h>
using namespace std;
int binary_searchlist(int* a,int n,int* x)
{
    int low,high,mid;
    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;//mid will be changed if the code don,t satisfy if condition
        if(a[mid]==*x)
        {
            return mid;
        }
        else if(a[mid]>*x)
            high=mid-1;
        else
            low=mid+1;

    }
return -1;
}
int main()
{
    int n,x;

    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        cin>>x;

    int j=binary_searchlist(a,n,&x);
    if(j!= -1)
    {
        cout<<j;
    }
    else
    {
        cout<<"fuck";
    }
}
