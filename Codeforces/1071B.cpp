/*link:http://codeforces.com/contest/1071/problem/B*/


/*check if first position if it is 'a' then there is no need for change but if there is not 'a' first we need to change given character to 'a'
after that if it possible to change given character to then change given character to 'a' else find minimum from right and down and update value of k.*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long ll;
const ll N = (ll) 2e3 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18 + 7;

ll dp[N][N];
vector<pair<ll, ll>>go[N * 2];

int main() {
        fio;
        ll n, k;
        cin >> n >> k;
        for (ll i = 0; i < N; i++)
                for (ll j = 0; j < N; j++) dp[i][j] = inf;
        string s[n];
        for (ll i = 0; i < n; i++) cin >> s[i];
        if (k && (s[0][0] != 'a') ) {
                s[0][0] = 'a';
                k--;
        }
        dp[0][0] = 0;
        cout << s[0][0];
        for (ll i = 0; i < n; i++)
                for (ll j = 0; j < n; j++)
                        go[i + j].push_back ({i, j});
        for (ll i = 0; i < 2 * n - 2; i++) {
                char mini = 'z';
                for (auto j : go[i]) {
                        ll rght = j.first;
                        ll down = j.second;
                        if (dp[rght][down] <= k) {
                                if (rght < n - 1) mini = min (mini, s[rght + 1][down]);
                                if (down < n - 1) mini = min (mini, s[rght][down + 1]);
                        }
                        if (dp[rght][down] < k)
                                mini = 'a';
                }
                cout << mini;
                for (auto j : go[i]) {
                        ll rght = j.first;
                        ll down = j.second;
                        if (dp[rght][down] <= k) {
                                if (rght < n - 1) dp[rght + 1][down] = min (dp[rght + 1][down], (dp[rght][down] + (s[rght + 1][down] != mini) ) );
                                if (down < n - 1) dp[rght][down + 1] = min (dp[rght][down + 1], (dp[rght][down] + (s[rght][down + 1] != mini) ) );
                        }
                }
        }
        return 0;
}
