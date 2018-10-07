#include<bits/stdc++.h>
using namespace std;
long long tree[400000],lazy[400000];
int co[400000];
void update(int node,int s,int e,int p,int q)
{
	if(co[node]!=0)
	{
		printf("!%d ",lazy[node]);
		tree[node]+=lazy[node]*(e-s+1)+co[node]*(((e-s+2)*(e-s+1)))/2;
		printf("[%d]=%lld ",node,tree[node]);
		if(s!=e)
		{
			lazy[node*2+1]+=lazy[node];
			co[node*2+1]+=co[node];
			lazy[node*2+2]+=lazy[node]+((s+e)/2-s+1);
			co[node*2+2]+=co[node];
			printf("L[%d]=%lld L[%d]=%lld ",node*2+1,lazy[node*2+1],node*2+2,lazy[node*2+2]);
			printf("C[%d]=%d C[%d]=%d ",node*2+1,co[node*2+1],node*2+2,co[node*2+2]);
		}
		lazy[node]=0;
		co[node]=0;
	}
	if(s>e||p>e||q<s)
	return;
	if(p<=s&&q>=e)
	{
		printf("PP ");
		long long st=s-p+1;
		tree[node]+=st*(e-s+1)+((e-s)*(e-s+1))/2;
		printf("[%d]=%lld ",node,tree[node]);
		if(s!=e)
		{
			lazy[node*2+1]+=st-1;
			co[node*2+1]+=1;
			lazy[node*2+2]+=st+((s+e)/2-s);
			co[node*2+2]+=1;
			printf("L[%d]=%lld L[%d]=%lld ",node*2+1,lazy[node*2+1],node*2+2,lazy[node*2+2]);
			printf("C[%d]=%d C[%d]=%d ",node*2+1,co[node*2+1],node*2+2,co[node*2+2]);
		}
		return ;
	}
	int mid=(s+e)/2;
	update(node*2+1,s,mid,p,q);
	update(node*2+2,mid+1,e,p,q);
	tree[node]=tree[node*2+1]+tree[node*2+2];
	printf("[%d]=%lld \n",node,tree[node]);
}
long long query(int node,int s,int e,int p,int q)
{
	if(s>e||p>e||q<s)
	return 0;
	if(co[node]!=0)
	{
		tree[node]+=lazy[node]*(e-s+1)+co[node]*(((e-s+2)*(e-s+1)))/2;
		if(s!=e)
		{
			lazy[node*2+1]+=lazy[node];
			co[node*2+1]+=co[node];
			lazy[node*2+2]+=lazy[node]+((s+e)/2-s+1);
			co[node*2+2]+=co[node];
		}
		lazy[node]=0;
		co[node]=0;
	}
	if(p<=s&&q>=e)
	return tree[node];
	int mid=(s+e)/2;
	return query(node*2+1,s,mid,p,q)+query(node*2+2,mid+1,e,p,q);
}
int main()
{
	int n,q,i,p,q1,c;
	scanf("%d%d",&n,&q);
	memset(tree,0,sizeof tree);
	memset(lazy,0,sizeof lazy);
	memset(co,0,sizeof co);
	for(i=0;i<q;i++)
	{
		scanf("%d%d%d",&c,&p,&q1);
		if(c==0)
		update(0,0,n-1,p-1,q1-1);
		else
		printf("%lld\n",query(0,0,n-1,p-1,q1-1));
	}
	return 0;
}
