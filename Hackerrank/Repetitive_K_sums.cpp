#include <bits/stdc++.h>
using namespace std;
    
typedef long long LL;
    
// returns n! / k! / (n-k)! = n * (n-1) * ... * (n-k+1) / 1 / 2 / ... / k
// = n / 1 * (n-1) / 2 * (n-2) / 3 * ... * (n-k+1) / k
int bin(int n, int k) {
    if(k > n - k) {
        k = n - k;
    }
    int p = 1;
    for (int i = 1; i <= k; ++i) {
        p *= n + 1 - i;
        p /= i;
    }
    return p;
}
    
int n, k;
LL a[100000];
multiset<LL> kSums;
    
// recursive routine that erase all sums having a[i] as the last element
// @j is the current a[j] we want to add to the sum
// @cnt is the count of numbers in the current sum
// @sum is the value of the sum
void rec(int i, int j, int cnt, LL sum) {
    if (cnt == k) {
        kSums.erase(kSums.find(sum));
    } else {
        rec(i, j, cnt + 1, sum + a[j]);
        if (j < i) {
            rec(i, j + 1, cnt, sum);
        }
    }
}
    
int main() {
    int T;
    scanf("%d", &T);
    assert ( 1<=T<=100000);
    for (int t = 0; t < T; ++t) {
        // n and k defined globally
        scanf("%d%d", &n, &k);
        assert ( 1<=n<=100000);
        assert ( 1<=k<=100000);
        
        int m = bin(n + k - 1, k); // the total number of k-sums
        assert ( 1<=m<=100000);
    
        // input k-sums and insert them into multiset
        kSums.clear();
        for (int i = 0; i < m; ++i) {
            LL kSum;
            scanf("%lld", &kSum);
            assert ( 1<=kSum<=1000000000000000000L);
            kSums.insert(kSum);
        }
    
        // the minimal k-sum is alsways a[0] * k
        a[0] = *(kSums.begin()) / k;
        kSums.erase(kSums.begin());
    
        for (int i = 1; i < n; ++i) {
    
            // after erasing all k-sums involcing numbers a[0], a[1], ..., a[i-1]
            // the minimal k-sum is a[i] + (k-1) * a[0]
            a[i] = *(kSums.begin()) - (k - 1) * a[0];
    
            // we don't need to erase ksums that contain a[n-1]
            // since we have already restored the whole array
            // and this important in the case n=2 since k could be 99999 in this case
            // which could lead to stack overflow and TL
            if (i < n - 1) {
                rec(i, 0, 1, a[i]);
            }
        }
    
        for (int i = 0; i < n; ++i) {
            printf("%lld%c", a[i], i < n - 1 ? ' ' : '\n');
        }
    }
    return 0;
}
