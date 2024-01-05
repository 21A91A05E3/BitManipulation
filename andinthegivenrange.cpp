//Given an array of n numbers and queries with left, and right positions. Find and of the elements in the given range.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    vector<vector<int> >frq(n,vector<int>(32,0));
    
    //2D Vector with binary representation
    for(int i=0;i<n;i++)
    {
        for(int j=31;j>=0;j--)
        {
           if(a[i]&(1<<j)) frq[i][j]++;
        }
    }
    
    //Upate  Vector as cumulative sum of setbits
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
                if(frq[r][j]==r-l+1)ans|=(1<<j);
            }
        }
        else
        {
        	for(int j=31;j>=0;j--)
        	{
        		if(frq[r][j]-frq[l-1][j]==r-l+1)ans|=(1<<j);
			}
		}
        cout<<ans<<" ";
    }
}
