// problem link : https://www.codechef.com/problems/CHOPRT
#include <iostream>
using namespace std;

int main() {
	int t;
	long long int a,b;
	cin>>t;
	while(t--){
	  cin>>a>>b;
	  if(a>b)
	  cout<<">"<<endl;
	  else if(a<b)
	  cout<<"<"<<endl;
	  else 
	  cout<<"="<<endl;
	    
	}
		return 0;
}
