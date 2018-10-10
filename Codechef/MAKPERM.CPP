#include <iostream>
using namespace std;

int main() {
	int t, n,i,ct,ct1,temp,a[100001],f[100001];
	cin>>t;
	while(t--){
	    ct1=0;
	    ct=0;
	    cin>>n;
	    for(i=1;i<=n;i++)
	        f[i] = 0;
	    for(i=1;i<=n;i++){
	            cin>>temp;
	            if(temp>n)
	                ct++;
	           else{
	            a[++ct1] = temp;
	            f[temp]++;
	           }
	   }
	   for(i=1;i<=ct1;i++){
	       if(f[a[i]]>1){
	           ct+=f[a[i]]-1;f[a[i]]=1;
	       }
	   }
	   cout<<ct<<"\n";
	}
	return 0;
}
