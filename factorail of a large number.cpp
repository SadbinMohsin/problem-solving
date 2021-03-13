#include<iostream>

using namespace std;

int main()
{
    int array_size = 3;
   int *student= new int[array_size];
    for(int i=0; i<array_size; i++)
    {
        cin>>*student;
        cout<<*student;
        student++;

    }
    cout<<*(student+4) <<endl;
    cout<<&student <<endl;
    for(int i=0; i<array_size; i++)
    {
        student--;
    }
    delete[] student;
}
