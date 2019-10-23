#include <bits/stdc++.h>
 
int main() {
 
	int n, e, r, max;
	r = 0;
	max = 0;
	scanf("%d \n", &n);
	int v [n] = { };
	for (int i = 0; i < n*2; i ++) {
		scanf("%d", &e);
		++v[e-1]; 
		if (v[e-1] == 2) {
			if (r > max) {
				max =r;
			}
			--r;
		}
		else if (v[e-1] == 1) {
			++r;
		}
	}
	printf("%d \n", max);
}
