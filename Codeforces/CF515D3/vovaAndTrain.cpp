#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ios
    int t;
    cin>>t;
    while(t--)
    {
        ll a,l,r,n;
        cin>>a>>n>>l>>r;
        cout<<(a/n)-((r/n)-(l-1)/n)<<endl;
    }
}
