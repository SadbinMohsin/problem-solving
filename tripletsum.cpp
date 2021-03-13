#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,cnt=0;
    cin>>n>>sum;
    int a[n];
    int*p=new int(3);
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {

        if(cnt==3)
        {

            break;
        }


        else
        {

            sum=sum-a[i];
            p[0]=a[i];
            cnt++;
            for(int j=i+1; j<n; j++)
            {
                if(j==i+1)
                {
                    sum=sum-a[j];
                    p[1]=a[j];
                    cnt++;
                    continue;
                }
                if(sum-a[j]==0)
                {
                    cnt++;
                    p[2]=a[j];
                    break;
                }
                if(sum-a[j]!=0)
                    continue;
                if(cnt!=3)
                    delete[] p;
            }
        }
    }
 for(int i=0; i<3; i++)
        cout<<p[i]<<" ";

}

