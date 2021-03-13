#include<bits/stdc++.h>
using namespace std;
void findgcd(int *a,int *b)
{
    int p;
    if((*a)%(*b)==0)
        cout<<*b;
    else
    {
        p= ((*a)%(*b));
        findgcd(b,&p);

    }
}
int  main()
{
    int a,b;
    cin>>a>>b;
    findgcd(&a,&b);

}
