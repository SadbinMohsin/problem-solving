#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(a[i]+a[j]==k)
           {
               cnt++;
               continue;
           }
           else
            continue;
       }
    }
    cout<<cnt;
}
