#include<bits/stdc++.h>
using namespace std;
void trappingrainwater(int *a,int n)
{
    int sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[0])
        {
          sum=a[0]-a[i];
          cnt=cnt+sum;
        }
        else
            return cnt;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<trappingrainwater(a,n);

}
