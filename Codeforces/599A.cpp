#include<iostream>
using namespace std;
int main()
{
	int d1,d2,d3;
	cin>>d1>>d2>>d3;
	cout<<min(d1,d2)+min(d3+max(d1,d2),min(2*d3+min(d1,d2),min(d1,d2)+2*max(d1,d2)));
return 0;
}
