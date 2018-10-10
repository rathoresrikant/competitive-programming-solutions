#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll int  
bool ismin(ll min, ll n, ll arr[], ll numcow){
    ll i,cow,prev;
    prev = arr[0];
    cow=1;
    for(i=1; i<n; i++){
        if((arr[i]-prev)>=min)
            {cow++;prev=arr[i];}
        if(cow==numcow)
            return true;
    }
    return false;
}
int main() {
	ll i,t,n,numcow,l,r,mid,ans;
	cin>>t;
	//cout<<t<<'\n';
	while(t--){
	    cin>>n;
	    cin>>numcow;
	    //cout<<n<<numcow<<'\n';
	    ll arr[n];
	    for(i=0;i<n;i++)
	        {cin>>arr[i];}
	   /*for(i=0;i<n;i++)
	        {cout<<arr[i];}*/
	   sort(arr,arr+n);
	   l=1;
	   r=(arr[n-1]-arr[0])/numcow+1;
	   ans =-1;
	   while(r>=l){
	       mid = l+(r-l)/2;
	       if(ismin(mid,n,arr,numcow))
	        {ans = mid;l=mid+1;}
	       else
	        r = mid-1;
	   }
	   cout<<ans<<'\n';
	}
	return 0;
}
