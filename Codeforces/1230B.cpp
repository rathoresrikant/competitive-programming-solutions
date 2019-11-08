// Problem Link: https://codeforces.com/problemset/problem/1230/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	if(k==0)
	{
		cout<<s<<endl;
		return 0;
	}
	if(n==1)
	{
		cout<<0<<endl;
		return 0;
	}
	if(s[0]!='1')
	{
		s[0]='1';
		k--;
	}
	int i=1;
	while(i<n)
	{
		if(k==0)
		{
			break;
		}
		if(s[i]!='0')
		{
			s[i]='0';
			k--;
		}
		i++;
	}
	cout<<s<<endl;
}