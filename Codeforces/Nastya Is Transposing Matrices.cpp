#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int n,m;
	cin>>n>>m;
	vector <long long int> a[n+m];
    vector <long long int> b[n+m];
	for(long long int i=0;i<n;i++)
	{
        for(long long int j=0;j<m;j++)
        {
            long long int inp;
            cin>>inp;
            a[i+j].push_back(inp);
        }
	}
	for(long long int i=0;i<n;i++)
	{
        for(long long int j=0;j<m;j++)
        {
            long long int inp;
            cin>>inp;
            b[i+j].push_back(inp);
        }
	}
	long long int flag=1;
	for(long long int i=0;i<n+m-1;i++)
	{
	sort(a[i].begin(),a[i].end());
	sort(b[i].begin(),b[i].end());
	if(a[i]!=b[i]) flag=0;
	}
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
