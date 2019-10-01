#include<bits/stdc++.h>
int main()
{
long long int n,d,k,i,sum=0,j,x;
long long int a[100004]={0};
scanf("%lld %lld",&n,&d);
for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
//if n<2 0 ans
for(i=2,j=0;i<n;i++)
{
//find index of an element with difference less
//than or equal to d
// last ith element is fixed +2 elements bw i and jth index
//given by k=i-j-1;
//k*(k-1)/2
x=a[i]-d;
while(a[j]<x)
    j++;
k=i-j-1;
sum=sum+(k)*(k+1)/2;
}
printf("%lld\n",sum);
}
