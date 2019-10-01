#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,i,k,x;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>k>>x;
    cout<<((k-1)*9+x)<<"\n";
}
}

