#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

typedef long long li;

using namespace std;

const int N = 1000 * 1000 + 13;

int n, m;
int a[N];
int b[N];

int main() {
    int T;
    scanf("%d", &T);
    forn(_, T){
        scanf("%d", &n);
        forn(i, n)
            scanf("%d", &a[i]);
        sort(a, a + n);
    
        m = 0;
        forn(i, n - 1){
            if (a[i] == a[i + 1]){
                b[m++] = a[i];
                ++i;
            }
        }
    
        int A = b[0], B = b[1];
        li P2 = (A + B) * li(A + B);
        li S = A * li(B);
    
        forn(i, m - 1){
            li p2 = (b[i] + b[i + 1]) * li(b[i] + b[i + 1]);
            li s = b[i] * li(b[i + 1]);
            if (s * P2 > S * p2){
                A = b[i];
                B = b[i + 1];
                S = s;
                P2 = p2;
            }
        }
    
        printf("%d %d %d %d\n", A, A, B, B);
    }
}