
/* problem link:https://www.spoj.com/problems/GCDEX/  */

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long ll;
const ll N = 1e6 + 5;
const ll MAX = 1e7 + 7;

ll phi[N], dp[N];

inline void fn()
{
        // for (ll i = 1; i < N; i++) phi[i] = i;
        for (ll i = 2; i < N; i++) if (phi[i] == 0)
                {
                        phi[i] = i - 1;
                        for (ll j = i + i; j < N; j += i)
                        {
                                if (phi[j] == 0) phi[j] = j;
                                phi[j] = phi[j] - phi[j] / i;
                        }
                }
        for (ll i = 1; i < N; i++)
                for (ll j = i; j < N; j += i)
                        dp[j] = dp[j] + (i * phi[j / i]);

        for (ll i = 1; i < N; i++) dp[i] = dp[i] + dp[i - 1];
}
int main()
{
        fn();
        ll n;
        while (1)
        {
                cin >> n;
                if (n == 0) return 0;
                cout << dp[n] << '\n';
        }
        assert (0);
}
