#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
ll power(ll n,ll x)
{
    ll po=1;
    while(x!=0)
    {
        if(x%2==0)
        {
            n=n*n;
            x=x/2;

        }
        po=po*n;
        x--;
    }
    return po;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n, le, re;
cin >> n >> le >> re;
ll sum1 = (ll)power(2, le) - 1;
sum1 += (n - le);
ll sum2 = (ll)power(2, re) - 1;
sum2 += ((n - re) * (ll)pow(2, (re - 1)));
cout << sum1 << " " << sum2;
}