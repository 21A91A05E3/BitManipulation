#include<bits/stdc++.h>
using namespace std;
int nearestpow(int n)
{
	int c=0;
	while((1<<c)<=n)c+=1;
	return c-1;
}
int main()
{
	int n;
	cin>>n;
	int p=nearestpow(n);
	int ans=0;
	int r=p-1;
	ans+=p*(1<<r);
	ans+=n-(1<<p)+1;
	ans+=nearestpow(n-(1<<p));
	cout<<ans;
}
