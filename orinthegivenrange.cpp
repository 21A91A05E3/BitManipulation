// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    vector<vector<int> >frq(n,vector<int>(32,0));
    
    for(int i=0;i<n;i++)
    {
        for(int j=31;j>=0;j--)
        {
           if(a[i]&(1<<j)) frq[i][j]++;
        }
    }
    
    for(int j=31;j>=0;j--)
    {
        for(int i=1;i<n;i++)
        {
            frq[i][j]+=frq[i-1][j];
        }
    }
    
    int q;
    cin>>q;
    int l,r,ans=0;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        ans=0;
        if(l==0)
        {
            for(int j=31;j>=0;j--)
            {
                if(frq[r][j]>1)ans|=(1<<j);
            }
        }
        else
        {
        	for(int j=31;j>=0;j--)
        	{
        		if(frq[r][j]-frq[l-1][j]>1)ans|=(1<<j);
			}
		}
        cout<<ans<<" ";
    }
   
    
}
