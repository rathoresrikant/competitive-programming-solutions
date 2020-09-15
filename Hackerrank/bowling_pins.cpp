#include <cmath>
#include <cstdio>
#include <vector>
//This program is created by Mohammad Tanzil Idrisi

#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

const int Maxn = 305;

int nim[Maxn];
int t;
int n;
char str[Maxn];

int main() {
    for (int i = 1; i < Maxn; i++) {
        set <int> S;
        for (int j = 0; j < i; j++)
            S.insert(nim[j] ^ nim[i - 1 - j]);
        for (int j = 0; j + 1 < i; j++)
            S.insert(nim[j] ^ nim[i - 2 - j]);
        while (S.find(nim[i]) != S.end()) nim[i]++;
    }  
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        scanf("%s", str);
        int res = 0;
        for (int i = 0; i < n; i++) if (str[i] == 'I') {
            int j = i;
            while (j < n && str[j] == 'I') j++;
            res ^= nim[j - i];
            i = j;
        }
        printf("%s\n", res? "WIN": "LOSE");
    }
    return 0;
}
