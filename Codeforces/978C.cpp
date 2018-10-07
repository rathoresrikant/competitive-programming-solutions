#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define loop(i,a,b) for(long long i = a; i < b; ++ i)
#define endl "\n"

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,w;
	cin>>n>>w;
	ll a[n],t1=1,t2;
	map <ll,ll> e,m,l;
	vector <ll> s;
	loop(i,0,n){
		cin>>a[i];
		t2=t1+a[i]-1;
		e[t2]=t1;
		//cout<<t1<<" "<<t2<<endl;
		t1=t2+1;
		s.pb(t2);
		l[t2]=i+1;
	}
	ll q;
	loop(i,0,w){
		cin>>q;
		ll beg=0,end=(s.size()-1),mid;
		while(beg<=end){
			mid=(beg+end)/2;
			if((q<=s[mid]&&q>=s[mid-1])){
				m[q]=l[s[mid]];
				break;
			}
			else if(q>s[mid]){
				beg=mid+1;
			}
			else if(q<s[mid]&&q<s[mid-1])
			{
				end=mid-1;
			}
		}	
		cout<<m[q]<<" "<<q-e[s[m[q]-1]]+1<<endl;

	}
	return 0;
}
