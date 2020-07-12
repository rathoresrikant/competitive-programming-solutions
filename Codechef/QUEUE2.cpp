// SnackDown Round-1B
// Problem link: https://www.codechef.com/SNCK1B19/problems/QUEUE2

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
                ll n, m, k, l;
                cin >> n >> m >> k >> l;
                ll res = inf;
                vector<ll>A;
                for (ll i = 0, x; i < n; i++) {
                        cin >> x;
                        A.push_back (x);
                }
                sort (begin (A), end (A) );
                ll wait = m * l;
                ll tmp = wait;
                vector<ll>time;
                for (ll i = 0; i < (ll) A.size(); i++) {
                        wait += l;
                        if (A[i] <= k) {
                                time.push_back (abs (wait - A[i]) );
                        }

                }
                ll idx = (ll) ( (lower_bound (begin (A), end (A), k ) ) - begin (A) );
                time.push_back (abs (tmp + (idx + 1) *l - k) );
                sort (begin (time), end (time) );
                cout << time[0] << '\n';
        }
        return 0;

}
