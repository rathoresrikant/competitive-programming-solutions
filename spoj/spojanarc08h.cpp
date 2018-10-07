#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
	long long int n,d,w=0,c,i,j=0;
	vector <int> arr;
	scanf("%lld%lld",&n,&d);
	while(n!=0&&d!=0)
	{
		for(i=0;i<n;i++)
		arr.push_back(i+1);
		for(i=0;i<n;i++)
		printf("%lld ",arr[i]);
		while(arr.size()!=1)
		{
			j+=d;
			printf("%lld ",arr[j-1]);
		arr.erase(arr.begin()+j%arr.size()-1 );
		 j--; 
	}
		printf("%lld %lld %lld\n",n,d,arr[0]);
		
		scanf("%lld%lld",&n,&d);
		arr.clear();
	}
	return 0;
}
