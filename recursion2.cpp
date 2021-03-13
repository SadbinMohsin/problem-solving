#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    int  cnt=0,p;
    if(n<10)
        {
            return n;
        }
    else
    {
       return fun(n/10)+(n%10);
        //cout<<n<<" ";//return জিনিস টা বুঝার জন্য রেখে দিলাম ।

    }
}
int main()
{
    int n;
    cin>>n;
    cout<<fun(n);
}
