#include <bits/stdc++.h>

using namespace std;

int main() 
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a(n);
		int pos=-1;
		for(int i=0;i<n;++i) 
		{
			cin>>a[i];
			if(a[i]==1) 
				pos = i;
		}
		bool flag=true,flag1=true;
		for(int i=1;i<n;++i) 
		{
			flag=flag&(a[(pos-i+n)%n]==i+1);
			flag1=flag1&(a[(pos+i+n)%n]==i+1);
		}
		if (flag||flag1)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	
	return 0;
}
