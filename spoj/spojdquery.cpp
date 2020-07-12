#include<bits/stdc++.h>
using namespace std;
int block;
int cnt[1000001],ans,qans[200000];
pair <pair<int,int>,int> p[200000];
bool cmp(pair<pair<int,int>,int> &x,pair<pair<int,int>,int> &y)
{
	int bx=x.first.first/block;
	int by=y.first.first/block;
	if(bx!=by)
	return bx<by;
	return x.first.second<y.first.second;
}
int main()
{
	int n,q,i,j;
	scanf("%d",&n);
	block=int(sqrt(n));
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d%d",&p[i].first.first,&p[i].first.second);
		p[i].second=i;
	}
	sort(p,p+q,cmp);
	int mo_left=0,mo_right=-1;
	ans=0;
	for(i=0;i<q;i++)
	{
		int l=p[i].first.first-1;
		int r=p[i].first.second-1;
		while(mo_right<r)
		{
			mo_right++;
			if(cnt[arr[mo_right]]==0)
			{
				cnt[arr[mo_right]]=1;
				ans++;
			}
			else cnt[arr[mo_right]]++;
		}
		while(mo_right>r)
		{
			cnt[arr[mo_right]]--;
			if(cnt[arr[mo_right]]==0)
			ans--;
			mo_right--;
		}
		while(mo_left<l)
		{
			cnt[arr[mo_left]]--;
			if(cnt[arr[mo_left]]==0)
			ans--;
			mo_left++;
		}
		while(mo_left>l)
		{
			mo_left--;
			if(cnt[arr[mo_left]]==0)
			{
				cnt[arr[mo_left]]=1;
				ans++;
			}
			else cnt[arr[mo_left]]++;
		}
		qans[p[i].second]=ans;
	}
	for(i=0;i<q;i++)
	printf("%d\n",qans[i]);
	return 0;
}
