#include<bits/stdc++.h>
using namespace std;
int left_to_right(int**a,int n)
{
    int i=0,j=0;
    for( i; i<n; i++)
    {
        if(a[i-1][j-1]==-1)
            break;
        for( j; j<n; j++)
        {
            if(a[i][j]==-1)
                continue;
            else
            {
            cout<<a[i][j]<<endl;
            a[i][j]=-1;
            }
        }
    }
    return up_to_down(a,n);
}
int up_to_down(int**a,int n)
{
    int i=0,j=n-3;
    for( j; j>=0; j--)
    {
        if(a[i-1][j+1]==-1)
            break;
        for(i; i<n; i++)
        {
            if(a[i][j]==-1)
                continue;
            else
            {
                cout<<a[i][j]<<" ";
                a[i][j]=-1;
            }
        }
    }
    return right_to_left(a,n);
}
int right_to_left(int**a,int n)
{
    int i=n-3,j=n-3;
    for( i; i>=0; i--)
    {
        if(a[i+1][j+1]==-1)
            break;
        for( j; j>=0; j--)
        {
            if(a[i][j]==-1)
                continue;
            else
            {
                cout<<a[i][j]<<" ";
                a[i][j]=-1;
            }
        }
    }
    return down_to_up(a,n);
}
int down_to_up(int**a,int n)
{
  int j=0,i=n-3;
    for( j; j<n; j++)
    {
        if(a[i+1][j-1]==-1)
            break;
        for(i; i>=0; i--)
        {
            if(a[i][j]==-1)
                continue;
            else
            {
                cout<<a[i][j]<<" ";
                a[i][j]=-1;
            }
        }
    }
    return left_to_right(a,n);

}
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    cout<<left_to_right(a,n);
    cout<<up_to_down(a,n);
    cout<<right_to_left(a,n);
    cout<<down_to_up(a,n);
}
