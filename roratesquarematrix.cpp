#include <iostream>

using namespace std;

int main()
{
    int i=0,j=0;
    for(i;i<5;i++)
    {
        if(j==6)
        {
            cout<<j<<" "<<i;
            break;
        }
        for(j;j<6;j++)
        continue;

    }
    //cout<<i<<" "<<j;
}
