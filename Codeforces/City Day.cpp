#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    ll n, x, y;
    cin >> n >> x >> y;
    ll a[n];
    ll flag;
    ll ans;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        flag = 1;
        for (ll j = 1; j <= x; j++)
        {
            if (i - j >= 0)
            {
                if (a[i - j] < a[i])
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                break;
            }
        }
        if (!flag)
            continue;
        for (ll j = 1; j <= y; j++)
        {
            if (i + j < n)
            {
                if (a[i + j] < a[i])
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                break;
            }
        }
        if (!flag)
            continue;
        if (flag)
        {
            ans = i;
            break;
        }
    }
    cout << ans+1 << '\n';

    return 0;
}