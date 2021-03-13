#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;
    int cnt[123] = {0};
    for(char c=s[0];c<s.length();c++) cnt[c]++;
    for(int i=0; i<123; i++)
        if(cnt[i] > 1)
         cout << char(i) << "->" << cnt[i] << endl;
}
