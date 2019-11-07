#include <bits/stdc++.h>
#define MAXN 100005
using namespace std;
 
long long n, i, j, nums[MAXN];
 
int main() {
	memset(nums, 0, sizeof nums);
	scanf("%lld", &n);
	for(i = 0; i < n; i++){
		scanf("%lld", &j);
		nums[j] += j;
	}
	long long a=0, b=0, c=0;
	for(i = 0; i < MAXN; i++){
		c = max(a, b);
		b = a+nums[i];
		a = c;
	}
	printf("%lld\n", a);
	return 0;
}
