#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define loop(i,a,b) for(i = a; i < b; ++ i)
#define endl "\n"

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,temp=0,count=0;
	cin>>n;
	string s;
	cin>>s;
	loop(i,0,n){
		if(s[i]=='x')
			temp++;
		else
			temp=0;
		if(temp==3)
		{
			count++;
			temp--;
		}

	}	
	cout<<count;
	return 0;
}
