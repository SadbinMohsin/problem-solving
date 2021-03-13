#include<bits/stdc++.h>
using namespace std;
class t
{
    public:
    int v;
};
int main()
{
    t *p;
    p=new t();
    p->v=5;
    cout<<p->v<<" "<<p<<" "<<&(p->v);
    delete p;

}
