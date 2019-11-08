#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
struct my
{
ll n;
vector<ll>v;
};
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
struct my m[27],m1[27];
map<ll,pair<ll,ll>>ans;
ll n,i,j,n1,n2,x,y;
for(i=0;i<27;i++)
{
m[i].n=0;
m1[i].n=0;
}
cin>>n;
string s1,s2;
cin>>s1;
cin>>s2;
//cout<<s1;
for(i=0;i<n;i++)
{
x=s1[i]-'a';
if(x==-34)
{
m[26].n++;
m[26].v.push_back(i+1);
}
else
{
m[x].n=m[x].n+1;
m[x].v.push_back(i+1);
}
}
for(i=0;i<n;i++)
{
x=s2[i]-'a';
if(x==-34)
{
m1[26].n=m1[26].n+1;
m1[26].v.push_back(i+1);
}
else
{
m1[x].n=m1[x].n+1;
m1[x].v.push_back(i+1);	
}
}
ll coun=0;


for(i=0;i<26;i++)
{
	if(m1[i].n>0 && m[i].n>0)
	{
		while(m1[i].n>0 && m[i].n>0)
		{
			n1=m[i].v.back();
			n2=m1[i].v.back();
			ans[coun]=make_pair(n1,n2);
			m[i].v.pop_back();
			m1[i].v.pop_back();
			m1[i].n=m1[i].n-1;
			m[i].n=m[i].n-1;
           coun++;

		}
	}
}
//cout<<coun<<endl;
//cout<<m[26].n<<" "<<m1[26].n<<endl;
for(i=0;i<26;i++)
{
	if(m[i].n==0 && m1[i].n>0 && m[26].n>0)
	{
		while(m1[i].n>0 && m[26].n>0)
		{
			n1=m[26].v.back();
			n2=m1[i].v.back();
			ans[coun]=make_pair(n1,n2);
			m[26].v.pop_back();
			m1[i].v.pop_back();
			m1[i].n=m1[i].n-1;
			m[26].n=m[26].n-1;
           coun++;			
		}
	}
		if(m1[i].n==0 && m[i].n>0 && m1[26].n>0)
	{
		while(m[i].n>0 && m1[26].n>0)
		{
			n1=m[i].v.back();
			n2=m1[26].v.back();
			ans[coun]=make_pair(n1,n2);
			m[i].v.pop_back();
			m1[26].v.pop_back();
					//cout<<m1[26].n<<endl;
			m1[26].n=m1[26].n-1;
			m[i].n=m[i].n-1;
           coun++;
           		//cout<<m1[26].n<<endl;			
		}
	}
	//cout<<m[3].n<<m1[3].n<<m1[26].n<<"\n";
}
//now only question marks left in both
while(m[26].n>0 && m1[26].n>0)
{
	ans[coun]=make_pair(m[26].v.back(),m1[26].v.back());
	m[26].v.pop_back();
	m1[26].v.pop_back();
	m[26].n=m[26].n-1;
	m1[26].n=m1[26].n-1;
	coun++;
}
cout<<coun<<endl;
for(i=0;i<coun;i++)
{
	cout<<ans[i].first<<" "<<ans[i].second<<endl;
}
}