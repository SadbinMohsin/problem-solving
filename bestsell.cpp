#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--)
        for(int j=0;j<i;j++)
    {
        if(a[i]>a[j])
        {
            s=a[i]-a[j];
            m=fmax(s,m);
        }
        else
            continue;
    }
    cout<<m;
}
