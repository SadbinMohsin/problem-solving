#include<bits/stdc++.h>
using namespace std;
void fun(int n,int k)
{

    if(n==0)
        return ;
    else
    {
        cout<<k-n<<" ";
        fun(n-1,k);
        //cout<<n<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int k=n+1;
    fun(n,k);
}
