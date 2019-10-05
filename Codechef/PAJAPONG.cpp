
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t,p1,p2,k;
	cin>>t;
	while(t--)
	{
	    cin>>p1>>p2>>k;
	    if(((p1+p2)/k)%2==0)
	    cout<<"Chef\n";
	    else
	    cout<<"Paja\n";
	    
	}
	return 0;
}
