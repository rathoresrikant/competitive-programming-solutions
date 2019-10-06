#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
  
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   	ll q,m,n,a[1005];
   	cin>>q;
   	while(q--)
   	{	int flag=0;
   		cin>>n;
   		for(int i=0;i<4*n;i++)
   			cin>>a[i];
   		sort(a,a+4*n);
   		m=a[0]*a[4*n-1];
   		for(int l=0;l<4*n;l+=2)
   		{
   			if(m!=a[l]*a[4*n-l-1]||a[l]!=a[l+1])
   				flag++;
   		}
   		if(flag==0)
   			cout<<"YES"<<endl;
   		else
   			cout<<"NO"<<endl;
   	}
 
 
    return 0;
}
