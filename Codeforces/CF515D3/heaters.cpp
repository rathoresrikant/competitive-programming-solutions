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
    int n,r;
    cin>>n>>r;

    int a[1005],b[1005]={0};
    int ans=0;

    for(int i=1;i<=n;i++)
    cin>>a[i];

    for(int i=1;i<=n;i++)
    {
        if(b[i]==1)
        continue;

        int x=-1;
        for(int j=1;j<=n;j++)
        {
            if(a[j]==1&&abs(i-j)<r)
            x=j;
        }

        if(x!=-1)
        {
            for(int j=max(0,x-r+1);j<=min(n,x+r-1);j++)
            {
                b[j]=1;
            }
        }

        ans++;

        if(b[i]==0)
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<ans;
}
