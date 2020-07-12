#include<bits/stdc++.h>
using namespace std;
int main()
{
long long ar[49][49]={0};
for(long long i=0;i<=48;i++)
{
ar[i][i]=2+i;
ar[i][0]=2+i;
}
for(long long i=0;i<49;i++)
{
for(long long j=0;j<=i;j++)
{
if(ar[i][j]==0)
{
ar[i][j]=ar[i-1][j]+ar[i-1][j-1];
}
}
}
int t;
cin>>t;
while(t--)
{
int n,m;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
if(arr[m-1]!=arr[m])
cout<<"1"<<endl;
else{
int q=m-1,o=m-1,z=0,y=0;

while(arr[q]==arr[q-1] && q>0)
{
q--;
}
while(arr[o]==arr[o+1]&& o<n)
{
o++;
}
y=(o-q)+1;
z=m-q;
cout<<ar[y-2][z-1]<<endl;
}
} 
}

