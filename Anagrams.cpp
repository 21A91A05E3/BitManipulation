#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    cin>>s>>r;
    if(s.size()!=r.size())cout<<0;
    else
    {
    int n=s.size();
    sort(s.begin(),s.end());
    sort(r.begin(),r.end());
    int h=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=r[i])
        {
            h=0;
            break;
        }
    }
    cout<<h;
    }

}
