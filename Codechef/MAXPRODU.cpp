//SnackDown Round-1B
//Problem link : https://www.codechef.com/SNCK1B19/problems/MAXPRODU

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = (ll) 2e5 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18 + 7;

int main() {
        ll tt;
        cin >> tt;
        while (tt--) {
                ll n, k;
                cin >> n >> k;
                ll need = ( (k + 1) * k) / 2;
                ll zeros = ( (k + 2) * (k + 1) ) / 2 - 1;
                if (n < need) {
                        cout << -1 << '\n';
                        continue;
                }
                if (n >= need && n < zeros) {
                        cout << 0 << '\n';
                        continue;
                }
                vector<ll>A;
                ll st = 2LL;
                ll tmp = k + 1;
                ll sum = (tmp * (tmp + 1) ) / 2 - 1;
                for (ll i = 1; i <= k; i++) {
                        A.push_back (st);
                        st++;
                }
                // cerr << sum << '\n';
                ll cnt = 0;
                for (ll i = k - 1; i >= 0; i--) {
                        ll dif = n - sum;
                        ll tmp = dif / (i + 1);
                        cnt += tmp;
                        A[k - 1 - i] += cnt;
                        sum += tmp * (i + 1);
                        //       cerr << dif << ' '  << sum << '\n';
                }
                //for (auto i : A) cout << i << ' ';
                ll res = 1LL;
                for (auto i : A) {
                        ll cur = (i - 1) * i % mod;
                        res = res * cur % mod;
                }
                cout << res << '\n';
        }
        return 0;

}
