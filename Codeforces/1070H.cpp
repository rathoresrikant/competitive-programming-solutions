/* link:http://codeforces.com/contest/1070/problem/H */


/*
first hash all sub-string and store its parent now for query check if given string exist in hash or not, if not then output "0 -" else output count and parent of sub-string.  
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long ll;
const ll N = (ll) 2e5 + 5;
const ll mod = (ll) 1e9 + 7;

map<string, pair<ll, string>>mp;

int main() {
        ll n;
        cin >> n;
        set<string>s;
        for (ll i = 0; i < n; i++) {
                string str;
                cin >> str;
                s.clear();
                for (ll i = 0; i < str.length(); i++) {
                        string cur;
                        cur += str[i];
                        s.insert (cur);
                        for (ll j = i + 1; j < str.length(); j++) {
                                cur += str[j];
                                s.insert (cur);
                        }
                }
                for (auto k : s) {
                        if (mp[k].first == 0) mp[k].second = str;
                        mp[k].first++;
                }
        }
        ll q;
        cin >> q;
        while (q--) {
                string str;
                cin >> str;
                if (mp[str].first == 0) cout << "0 -\n";
                else cout << mp[str].first << ' ' << mp[str].second << '\n';
        }
        return 0;
}
