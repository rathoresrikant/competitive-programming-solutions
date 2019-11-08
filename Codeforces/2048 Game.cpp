#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 10000000007
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif  
    ll q;
    cin>>q;
    while(q--)
    {
    	ll n,i;
    	cin>>n;
    	ll arr[100005];
    	for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	sort(arr,arr+n);
    	ll j,sum=0,flag=0;;
    	for(i=0;i<n;i++)
    	{
    		sum=0;
    		for(j=i;j<n;j++)
    		{
    			sum=sum+arr[j];
    			if(sum==2048)
    			{
    				flag=1;
    				break;
    			}
    		}

    	}
    	if(flag==1)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
}
