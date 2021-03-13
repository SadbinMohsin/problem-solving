#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
     cin>>n;
    int a[n];
    //int b[100];
    //cnt=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        if(a[i]+a[i-1]==0)
        {
            continue;
        }
        else
        {
          for(int j=i+1;j<n;j++)
          {
              if(a[i]>a[j]&&(a[i]+a[j]!=0))
                {
                    k=i;
                  while(k<j)
                  {
                     swap(a[k],a[j]);
                      k++;
                  }
                  continue;
                }
              if(a[i]+a[j]==0)
                {
                    k=i+1;
                  while(k<=j)
                  {
                     swap(a[k],a[j]);
                      k++;
                  }
                  continue;
                }
                else
                    continue;
          }

        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}
