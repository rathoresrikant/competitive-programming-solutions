#include <bits/stdc++.h>
using namespace std;
int main() {
	long t, n, x, s, a, b;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>s;
	    for(int i=0;i<s;i++)
	    {
	        cin>>a>>b;
	        if(x==a)
	        x=b;
	        else
	        if(x==b)
	        x=a;
	    }
	    cout<<x<<endl;
	}
	return 0;
}
