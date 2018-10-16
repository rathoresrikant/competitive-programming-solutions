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
    int t,x;
    cin>>t;

    while(t--)
    {
        cin>>x;
        int cnt=0; 
        while(x) 
        {
            if(x&1)
            cnt++;

            x=x>>1;
        }
        cout<<(1<<cnt)<<endl; 
    }
}
