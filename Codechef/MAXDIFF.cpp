#include <iostream>
#include <algorithm>
using
namespace std;

int main()
{  int t;
  std::cin>>t;
  while(t--){
	  long int n,k;
	  std::cin>>n>>k;
	  int a[n];
	  while(n--){ 
		  std::cin>>a[n-1];
		
	  }
	  
    sort(a,a+n); 
	long int son=0,parent=0;
	int na=0;
	while(na<k){
		son+=a[na];
		na++;
	}
	while(na<n){
		parent+=a[na];
		na++;
	
	}
	long int ans=parent-son;
	std::cout<<ans<<endl;
  }
	return 0;
}
