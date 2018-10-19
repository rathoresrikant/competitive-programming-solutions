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
    int n;
    cin>>n;
    map<int,int> l,r;

    int lc=0,rc=0;

    char x;
    int y;

    cin>>x>>y;
    int center=y,res,res1;

    for(int i=1;i<n;i++)
    {
        cin>>x>>y;
        if(x=='R')
        {
            rc++;
            r[y]=rc;
        }
        else if(x=='L')
        {
            lc++;
            l[y]=lc;
        }
        else
        {
            if(r.find(y)==r.end())
            {
                res=lc-l[y];
                res1=l[y]+rc;
                cout<<min(res,res1)<<endl;
            }
            else if(l.find(y)==l.end())
            {
                res=rc-r[y];
                res1=r[y]+lc;
                cout<<min(res,res1)<<endl;
            }
            else
            {
                cout<<min(rc,lc)<<endl;
            }
        }
    }
}
