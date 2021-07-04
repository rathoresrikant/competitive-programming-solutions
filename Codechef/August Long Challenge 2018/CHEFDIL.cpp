#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long t;
	cin>>t;
	while(t--){
	
		string s;
		cin>>s;
		long long o=0;
		for(int i=0;i<s.size();i++)
			if(s[i]=='1')
				o++;
		
		(o%2==1 &&  o!=s.size())?cout<<"WIN\n":cout<<"LOSE\n";
	
	}

}