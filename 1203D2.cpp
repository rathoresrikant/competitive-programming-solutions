#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() 
{
	string s, t;
	cin>>s>>t;
	vector<int> vec(t.size());
	
	for(int i=int(t.size())-1;i>=0;i--) 
	{
		int pos=int(s.size())-1;
		if(i<int(t.size())-1) 
			pos=vec[i+1]-1;
		while(s[pos]!=t[i]) 
			pos--;
		vec[i]=pos;
	}
	int ans=0;
	int pos=0;
	for(int i=0;i<int(s.size());i++) 
	{
		int x=int(s.size())-1;
		if(pos<int(t.size())) 
			x=vec[pos]-1;
		ans=max(ans,x-i+1);
		if(pos<int(t.size())&&t[pos]==s[i]) 
			pos++;
	}
	cout<<ans<<endl;
	return 0;
}
