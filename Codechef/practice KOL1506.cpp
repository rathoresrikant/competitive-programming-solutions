//solution to smosa bhai and his courier company in easy section of practice

#include<iostream>
#include<cstring>
#include<cstdio>
#define scani(n) scanf("%d",&n)
#define scanl(n) scanf("%lld",&n)
#define fr(i,n) for(int i=0;i<n;i++)
#define pr cout<<
#define en <<endl
#define sp <<' '
#define mod 1000000007
typedef long long ll;
using namespace std;

//comparision function(less) for qsort.
int comp(const void *a,const void *b)
{
	int c=*(int*)a,d=*(int*)b;
	if(c<d) return -1;
	if(c>d) return 1;
	return 0;
}

ll comb[101][101],arsumaj[101], arpowai[101],sum;
int arnum[100000];
main()
{
	//making combinations.
	for(int i=0;i<=100;i++)
		comb[i][0]=comb[i][i]=1;
	for(int i=2;i<=100;i++)
		for(int j=1;j<i;j++)
			comb[i][j]= (comb[i-1][j]+ comb[i-1][j-1])%mod;
	
	arpowai[0]=1;
	int t,n,k;
	scani(t);
	while(t--)
	{
		scani(n);scani(k);
		memset(arsumaj,0,(k+1)*8);
		sum=0;
		fr(i,n)
			scani(arnum[i]);
		qsort(arnum, n, 4, comp);
		for(int i1=1;i1<=k;i1++)
				arpowai[i1]= (arpowai[i1-1]*arnum[0])%mod;
		for(int i=1;i<n;i++)
		{
			for(int i1=0;i1<=k;i1++)
				arsumaj[i1]=(arsumaj[i1]+arpowai[i1])%mod;
			
			for(int i1=1;i1<=k;i1++)
				arpowai[i1]= (arpowai[i1-1]*arnum[i])%mod;
			
			for(int a=0;a<=k;a++)
			{
				if((k-a)%2)
					sum=(sum- ((comb[k][a]*arpowai[a])%mod) *arsumaj[k-a])%mod;
				else
					sum=(sum+ ((comb[k][a]*arpowai[a])%mod) *arsumaj[k-a])%mod;
			}
		}
		if(sum<0)
			sum+=mod;
		printf("%d\n",(2*sum)%mod);
	}
}
