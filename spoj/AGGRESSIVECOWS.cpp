#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[1000000];
bool solve(int mid,int c,int n)
{sort(a,a+n);
int count1=1,i;
int prev=a[0];
for(i=1;i<n;i++)
{if(a[i]-prev>=mid)
{count1++;
prev=a[i];
if(count1==c)
return true;
}
}
return false;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{int n,c;
	cin>>n>>c;
	int i;
	for(i=0;i<n;i++)
	{cin>>a[i];
	}
	int low=0,ans=0;
	int high = a[n-1];
	while(low<=high)
	{int mid = low + (high-low)/2;
	if(solve(mid,c,n))
	{ans = mid;
	low = mid+1;
	}
	else
	{
	high = mid-1;
	}
	}
	cout<<ans<<"\n";
	}
	return 0;
 
 
 
	return 0;
}
 
