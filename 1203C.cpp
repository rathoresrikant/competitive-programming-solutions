#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int n;
	cin>>n;
	long long g=0;
	for (int i=0;i<n;i++) 
	{
		long long x;
		cin>>x;
		g=__gcd(g, x);
	}
	int ans=0;
	for (int i=1; i*1ll*i<=g;i++) 
	{
		if (g%i==0) 
		{
			ans++;
			if (i!=g/i) 
			{
				ans++;
			}
		}
	}
	cout<<ans<<endl;	
	return 0;
}
