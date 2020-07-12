//problem link: http://codeforces.com/contest/1060/problem/C

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long ll;
const ll N = (ll) 2e5 + 2;
const ll mod = (ll) 1e9 + 7;



int main()
{
        fio;
        ll n, m;
        cin >> n >> m;
        ll A[n], B[m];
        for (ll i = 0; i < n; i++) cin >> A[i];
        for (ll i = 0; i < m; i++) cin >> B[i];
        ll AA[n + 2], BB[m + 2];
        ll lim;
        cin >> lim;
        for (ll i = 1; i <= n; i++) AA[i] = lim + lim;
        for (ll i = 1; i <= m; i++) BB[i] = lim + lim;

        for (ll i = 0; i < n; i++)
        {
                ll cur = 0;
                for (ll j = i; j < n; j++)
                {
                        cur += A[j];
                        AA[j - i + 1] = min (AA[j - i + 1], cur);
                }
        }

        for (ll i = 0; i < m; i++)
        {
                ll cur = 0;
                for (ll j = i; j < m; j++)
                {
                        cur += B[j];
                        BB[j - i + 1] = min (BB[j - i + 1], cur);
                }
        }
        ll res = 0;
        for (ll i = 1; i <= n; i++)
                for (ll j = 1; j <= m; j++)
                        if (AA[i]*BB[j] <= lim)
                                res = max (res, i * j);

        cout << res;
        return 0;
}
