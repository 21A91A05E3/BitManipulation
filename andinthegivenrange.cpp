#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code herep
    
    int n,ans=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        int e;
        cin>>e;
        v[i]=(e);
    }
    vector<vector<int>>p(n,vector<int>(32,0));
    for(int i=0;i<n;i++)
    {
        for(int j=31;j>=0;j--)
        {
            if(v[i]&(1<<j))
            {
                p[i][j]=1;
            }
        }
    }
   for(int i=1;i<n;i++)
    {
        for(int j=31;j>=0;j--)
        {
            if(v[i]&(1<<j))
            {
                p[i][j]=p[i-1][j]+1;
            }
        }
    }
    
    int a,b;
    cin>>a>>b;
    for(int i=31;i>=0;i--)
    {
        if((p[b][i]-p[a][i])==(b-a))
        {
            ans=ans | (1<<i);
        }
    } 
    cout<<ans;
}
