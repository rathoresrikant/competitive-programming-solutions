#include<bits/stdc++.h>
using namespace std;
long long set2(long long x)
{
	long long c2=0;
			while(x%2==0&&x!=0)
			{
			c2++;
			x/=2;
		}
			return c2;
}
long long set5(long long x)
{
	long long c5=0;
			while(x%5==0&&x!=0)
			{
			c5++;
			x/=5;
		}
			return c5;
}
int main()
{
	long long t,i,n,m,j,k,l,r,c,s,co,q,c2,c5,s2,s5;
	long long x,y;
	cin>>t;
	for(i=0;i<t;i++)
	{
		s=0,co=0,c2=c5=s2=s5=0;
		cin>>n>>m;
		long long arr[n];
		long long a2[n],a5[n];
		for(j=0;j<n;j++)
		{
			c2=c5=0;
		cin>>arr[j];
		if(arr[j]%2==0&&arr[j]%5!=0)
		{
			a2[j]=set2(arr[j]);
			a5[j]=0;
		}
		else if(arr[j]%2!=0&&arr[j]%5==0)
		{
			a5[j]=set5(arr[j]);
			a2[j]=0;
		}
		else if(arr[j]%2==0&&arr[j]%5==0)
		{
			q=arr[j];
			a5[j]=set5(q);
			while(q%5==0&&q!=0)
			q/=5;
			a2[j]=set2(q);
		}
		else if(arr[j]%2!=0&&arr[j]%5!=0)
		{
			a2[j]=0;
			a5[j]=0;
					}
	}
		for(j=0;j<m;j++)
		{
			s2=s5=0;
			cin>>c;
			if(c==1)
			{
				cin>>l>>r>>x;
				if(x%2==0&&x%5!=0)
		{
			c2=set2(x);
			c5=0;
		}
		else if(x%2!=0&&x%5==0)
		{
			c5=set5(x);
			c2=0;
		}
		else if(x%2==0&&x%5==0)
		{
			q=x;
			c5=set5(q);
			while(q%5==0&&q!=0)
			q/=5;
			c2=set2(q);
		}
		else if(x%2!=0&&x%5!=0)
		{
			c2=0;
			c5=0;
					}
					for(k=l-1;k<r;k++)
					{
						a2[k]+=c2;
						a5[k]+=c5;
					}
	
			}
			else if(c==2)
			{
				cin>>l>>r>>y;
				for(k=l-1;k<r;k++)
				{
				arr[k]=y*(k-l+2);
				if(arr[k]%2==0&&arr[k]%5!=0)
		{
			a2[k]=set2(arr[k]);
			a5[k]=0;
		}
		else if(arr[k]%2!=0&&arr[k]%5==0)
		{
			a5[k]=set5(arr[k]);
			a2[k]=0;
		}
		else if(arr[k]%2==0&&arr[k]%5==0)
		{
			q=arr[k];
			a5[k]=set5(q);
			while(q%5==0&&q!=0)
			q/=5;
			a2[k]=set2(q);
		}
		else if(arr[k]%2!=0&&arr[k]%5!=0)
		{
			a2[k]=0;
			a5[k]=0;
					}
	}
			}
			else if(c==3)
			{
				cin>>l>>r;
				for(k=l-1;k<r;k++)
				{
					s2+=a2[k];
					s5+=a5[k];
				}
				s+=min(s2,s5);
			}
		}
		cout<<s<<endl;;
	}
	return 0;
}
