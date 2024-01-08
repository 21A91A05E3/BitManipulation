#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char ch;
    cin>>ch;
    int k;
    cin>>k;
    int c=0,n=s.size();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==ch)c+=1;
    }
    if(c>k || c==n)cout<<1;
    else cout<<0;

}
