#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    // your code goes here
    ll t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll c[m+1],d[n+1],f[n+1],b[n+1];
        ll maxp=0,sold[n+1];
        for(ll i=1;i<=m;i++)
            cin>>c[i];

        for(ll i=1;i<=n;i++)
        {
            cin>>d[i]>>f[i]>>b[i];
            if(c[d[i]]>0)
            {
                maxp+=f[i];
                sold[i]=d[i];
                c[d[i]]--;
                d[i]=0;
                b[i]=0;
            } else
                sold[i]=0;

        }

        // here finding which drink should be sold to .....

        for(ll i=1;i<=n;i++)
        {
            if(d[i]!=0)
            {
                for(ll j=1;j<=m;j++)
                    if(c[j]>0)
                    {
                        sold[i]=j;
                        c[j]--;
                        break;
                    }
            }
        }
        // here finding the maximum profit

        for(ll i=1;i<=n;i++)
        {
            if(d[i]!=0)
            {
                maxp+=b[i];
            }
        }

        //  printing the result

    cout<<maxp<<'\n';
        for(ll i=1;i<=n;i++)
            cout<<sold[i]<<" ";
        cout<<endl;

    }
    return 0;
}
