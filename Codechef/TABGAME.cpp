/* link:https://www.codechef.com/SEPT18B/problems/TABGAME/ */

/*
explanation:

input 
1
101
01
6
1 1
1 2
1 3
2 1
2 2
2 3

output

dp1
0 1 0 1 
0 1 1 0 
1 0 1 1 

dp2
0 1 0 
0 1 1 
1 0 1 

after 3 calculation dp1 and dp2 will repeat this repeatation due to it depend on previous value of dp && it will repeat itself digonally
for answering query we just have find which digonal we are on it will give answer

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio (false);
        cin.tie (NULL);
        cout.tie (NULL);
        int t;
        cin >> t;
        while (t--) {
                string a, b;
                cin >> a >> b;
                int m = a.size(), n = b.size();
                bool dp1[n + 1][3], dp2[3][m + 1];
                for (int i = 0; i <= 2; i++) for (int j = 0; j <= m; j++) dp2[i][j] = 0;
                for (int i = 0; i <= n; i++) for (int j = 0; j <= 2; j++) dp1[i][j] = 0;
                for (int i = 1; i <= 2; i++) {
                        if (a[i - 1] == '1') dp1[0][i] = 1;
                        else dp1[0][i] = 0;
                }
                for (int i = 1; i <= 2; i++) {
                        if (b[i - 1] == '1') dp2[i][0] = 1;
                        else dp2[i][0] = 0;
                }
                for (int i = 1; i <= n; i++) {
                        if (b[i - 1] == '1') dp1[i][0] = 1;
                        else dp1[i][0] = 0;
                }
                for (int i = 1; i <= m; i++) {
                        if (a[i - 1] == '1') dp2[0][i] = 1;
                        else dp2[0][i] = 0;
                }
                for (int i = 1; i <= 2; i++)
                        for (int j = 1; j <= m; j++)
                                dp2[i][j] = ! (dp2[i - 1][j] && dp2[i][j - 1]);
                for (int i = 1; i <= n; i++)
                        for (int j = 1; j <= 2; j++)
                                dp1[i][j] = ! (dp1[i - 1][j] && dp1[i][j - 1]);
                /*   for (int i = 0; i <= 2; i++) {
                           for (int j = 0; j <= m; j++)
                                   cout << dp2[i][j] << ' ';
                           cout << '\n';
                   }
                   cout << '\n';

                   for (int i = 0; i <= n; i++) {
                           for (int j = 0; j <= 2; j++)
                                   cout << dp1[i][j] << ' ';
                           cout << '\n';
                   }*/
                int q;
                cin >> q;
                while (q--) {
                        int x, y;
                        cin >> x >> y;
                        if (x <= 2) cout << dp2[x][y];
                        else if (y <= 2) cout << dp1[x][y];
                        else {
                                int mn = min (x, y) - 2;
                                x -= mn, y -= mn;
                                if (x <= 2) cout << dp2[x][y];
                                else cout << dp1[x][y];
                        }
                }
                cout << '\n';
        }
        return 0;
}

