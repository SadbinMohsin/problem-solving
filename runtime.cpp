#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    void whoami()
    {
        cout << "I'm Base\n";
    }
};
class Derived: public Base
{
public:
    void whoami()
    {
        cout << "I'm Derived\n";
    }
};
int main(void)
{
    Base *b_ptr ;
    Derived jk;
    b_ptr=&jk; //run-time polymorphism b_ptr->whoami(); return 0; }
    b_ptr->whoami();

}
