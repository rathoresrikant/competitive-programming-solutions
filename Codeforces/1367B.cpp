#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,k;
		int a[10000];
		
		cin>>n;
		
		int even=0,odd=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
      
			if(a[i]%2!=i%2)
			{
				if(a[i]%2==0)
				even++;
				
				else
				odd++;
				
				
			}	
		}
		
		if(even==odd)
		cout<<even;
		
		else
		cout<<-1;
		
	cout<<endl;
	}
}
