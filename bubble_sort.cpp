#include<bits/stdc++.h>
using namespace std;
void bubblesort(int* a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                swap(a[j+1],a[j]);
                continue;
            }
            else
                continue;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    bubblesort(a,n);
}
