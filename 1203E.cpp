#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
  
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   	int n;
   	
   	cin>>n;
   	int a[n];
int c=0,t=1;
for(int j=0;j<n;j++)
cin>>a[j];
 
	sort(a,a+n);
   	for(int i=0;i<n;i++)
   	{
   		if(t<=a[i]-1)
   		{
   			t=a[i];
   			c++;
   		}
   		else if(t<=a[i]+1)
   		{
   			c++;
   			t++;
   		}
   		
   	}
   	cout<<c;
 
    return 0;
}
