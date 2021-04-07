#include <iostream>
#include <string>
using namespace std;
int main() 
{	
	string s,t;
	cin>>s>>t;
	int ans=0;
	for(int i=0;i<int(s.size());i++) 
	{
		for(int j=i;j<int(s.size());j++) 
		{
			int pos=0;
			for(int k=0;k<int(s.size());k++) 
			{
				if(i<=k&&k<=j) 
					continue;
				if(pos<int(t.size())&&s[k]==t[pos]) 
					pos++;
			}
			if(pos==int(t.size())) 
				ans=max(ans,j-i+1);
		}
	}
	cout<<ans<<endl;
	return 0;
}
