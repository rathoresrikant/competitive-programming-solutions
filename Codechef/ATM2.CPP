#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
	    int t;
	    cin>>t;
	    while(t--)
	    {
	       int n,k,s=0,i;
	       cin>>n>>k;
	       int a[n];
	       for(i=0;i<n;i++)
	       cin>>a[i];
	       for(i=0;i<n;i++)
	       {
	           s=s+a[i];
	           if(s>k)
	           {
	               cout<<"0";
	               s=s-a[i];
	           }
	           else
	           cout<<"1";
	       }
	       cout<<"\n";
	    }
	return 0;
}
