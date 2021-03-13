#include<bits/stdc++.h>
using namespace std;
int main()
{

string str;
int n,cnt=0,cnt1=0,kat=0,sum=0;
cin>>n;
for(int i=0;i<n;i++)
    cin>>str[i];
int j=n-1;
 for(int i=0;i<n;i++)
 {
     cnt=cnt+int(str[i]);
     //cout<<"cnt is"<<cnt<<endl;
     //cout<<j<<" ";
    while(j>=0)
    {
      cnt1=cnt1+int(str[j]);
      //cout<<"cnt1 is"<<cnt1<<endl;
      kat=cnt-cnt1;
      sum=sum+kat;
      //cout<<"kat is"<<kat<<endl;
      //cout<<kat<<" ";
      j--;
      break;
    }
 }

if(sum==0)
cout<<"yeaaah";
else
    cout<<"nooo";


}
