#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,rem;
	vector <int> bcode;
	cin>>n;
	while(n){
		rem=n%2;
		bcode.push_back(rem);
		n/=2;
	}
	for(int i=0;i<bcode.size();i++)
		cout<<bcode.at(i);
return 0;
}
