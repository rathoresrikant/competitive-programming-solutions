// Author: ishaang12
// Time: 2019-07-17 20:41:37

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    ll ans = (-3 + (ll)sqrt(9 + 8 * (n + k))) / 2;
    cout << n - ans;
    return 0;
}