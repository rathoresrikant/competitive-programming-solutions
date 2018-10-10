#include <bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int k;
k=floor(log2(n+1))-1;
if(n!=2*pow(2,k)-1)
cout<<k+2<<"\n";
else
cout<<k+1<<"\n";
return 0;
}
