#include<bits/stdc++.h>

using namespace std;

#define x first
#define y second

const int N = 200043;

void norm(pair<int, int>& p)
{
    if(p.x < 0)
    {
        p.x *= -1;
        p.y *= -1;
    }
    else if (p.x == 0 && p.y < 0)
    {
        p.y *= -1;
    }
    int d = __gcd(abs(p.x), abs(p.y));
    p.x /= d;
    p.y /= d;
}

map<pair<int, int>, int> m;

int a[N];
int b[N];
int n;

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    int ans = 0;
    int cnt0 = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            if(b[i] == 0)
                cnt0++;
        }
        else
        {
            pair<int, int> p = make_pair(-b[i], a[i]);
            norm(p);
            m[p]++;
            ans = max(ans, m[p]);
        }
    }
    cout << cnt0 + ans << endl;
}