#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        lli n, k;
        cin >> n >> k;
        lli a[n];
        for (lli i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        lli count = 0;
        for (int i = 1; i < n; i++)
        {
            lli x = (k - a[i]) / a[0];
            count += x;
        }
        cout << count << endl;
    }

    return 0;
}