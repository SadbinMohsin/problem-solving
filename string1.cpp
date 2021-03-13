#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="IoveIyou";
    string s1="uoyIevoI";
    int count1[256]={0};
    //int count2[256]={0};
    for(int i=0;i<s.length();i++)
   //cout<<count[s[i]]++<<" ";
    count1[s[i]]++;
    cout<<endl;
    for(int i=0;i<s1.length();i++)
    count1[s1[i]]--;
    for(int i=0;i<256;i++)
    {
        if(count1[i]!=0)
            cout<<false;
        else
        {
            cout<<true;
            break;
        }
    }

}
