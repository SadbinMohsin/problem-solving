#include<bits/stdc++.h>
using namespace std;
const int m=5;
const int n=5;
void compute(int a[m][n] ,int i,int j)
{
    int k;
if(i>=m&&j>=n)
    {
        cout<<k;
        return;
    }
  int maximum=0;
  int s= a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j+2]+a[i+2][j+1]+a[i+2][j+2];
   k=fmax(maximum,s);
  if(j==n)
  {
      i++;
      j=0;
      return compute(a,i,j);
  }
  else
    return compute(a,i,j+1);

}
int main()
{
    int cnt=0,i=0,j=0;

    int a[m][n];

    for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
        cin>>a[i][j];
     compute(a,0,0);

}
