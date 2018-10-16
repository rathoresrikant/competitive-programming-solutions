#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios		ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int ans=1,a[100005],size[100005],visited[100005],cnt=0,ans1=1,n,q;
map<int,int>m;
bool find(int x,int y)
{
	if(a[x]==a[y])
	return true;
	else
	return false;
}
int root(int i)
{
	while(a[i]!=i)
	{
		a[i]=a[a[i]];
		i=a[i];
	}
	
	return i;
}

void unio(int x,int y)
{
	int rootx=root(x);
	int rooty=root(y);


	if(rootx!=rooty)
	{
		
		m[size[rootx]]--;
		m[size[rooty]]--;
		if(m[size[rootx]]==0)
		m.erase(size[rootx]);
		if(m[size[rooty]]==0)
		m.erase(size[rooty]);
		if(size[rootx]>size[rooty])
		swap(rootx,rooty);
		a[rootx]=a[rooty];
		size[rooty]+=size[rootx];
		m[size[rooty]]++;
	}	
}
int main()
{
	ios
	
	cin>>n>>q;

	for(int i=1;i<=n;i++)
	{
		a[i]=i;
		size[i]=1;
	}
	int x,y;
	m[1]=n;
	map<int,int>::iterator it,it1;
	while(q--)
	{
		cin>>x>>y;
		if(find(x,y)==false)
		unio(x,y);

		it=m.begin();
		it1=m.end();
		it1--;
		cout<<abs(it1->first-it->first)<<endl;
	}
}
