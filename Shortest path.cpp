#include<bits/stdc++.h>
using namespace std;
int setbit(int n)
{
	int c=0;
	for(int i=31;i>=0;i--)
	{
		if(n&(1<<i))c+=1;
	}
	return c;
}
int main()
{
	int n;
	cin>>n;
	int a,b;
	cin>>a>>b;
	int x=setbit(a);
	int y=setbit(b);
	if((x%2==0 and y%2==1) or (x%2==1 and y%2==0)) cout<<-1;
	else
	{
		int z=a^b;
		int s=setbit(z);
		cout<<s/2;
	}
}
