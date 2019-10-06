#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[(4*n)];
		for(int i=0;i<4*n;i++)
			cin>>a[i];
 		int area=a[0]*a[4*n-1];
		bool flag=true;
		for(int i=0;i<n;i++) 
		{
			int x=2*i;
			int y=4*n-(2*i)-1;
			if(a[x]!=a[x+1]||a[y]!=a[y-1]||1ll*a[x]*a[y]!=area)
				flag=false;
		}
		if(flag==true) 
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return
}
