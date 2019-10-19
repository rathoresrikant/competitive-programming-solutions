#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<ll> Vi;
typedef vector<Vi> Mi;

Vi compute_acum(const Vi& v) {
  int n = v.size();
  Vi acum(n, 0);
  for (int i = 0; i < n; ++i) {
    if (i > 0) {
      acum[i] = acum[i - 1];
    }
    acum[i] += v[i];
  }
  return acum;
}

ll sub_sum(const Vi& acum, int i, int j) {
  ll res = acum[j - 1];
  if (i > 0) {
    res -= acum[i - 1];
  }
  return res;
}

bool possible(const Vi& acum, ll k) {
  int n = acum.size();
  for (ll i = k; i < acum[n - 1]; i += k) {
    if (!binary_search(acum.begin(), acum.end(), i)) {
      return false;
    }
  }
  return true;
}

int main() {
  int tcas;
  cin >> tcas;
  for (int cas = 1; cas <= tcas; ++cas) {
    int n;
    cin >> n;
    Vi v(n);
    for (int i = 0; i < n; ++i) {
      cin >> v[i];
    }
    Vi acum = compute_acum(v);
    vector<bool> res(n + 1, false);
    for (int i = 0; i < n; ++i) {
      if (acum[n - 1] % acum[i] == 0 && acum[n - 1] / acum[i] <= n) {
        res[acum[n - 1] / acum[i]] = possible(acum, acum[i]);
      }
    }
    for (int k = 1; k <= n; ++k) {
      cout << (res[k] ? 1 : 0);
    }
    cout << endl;
  }
}
