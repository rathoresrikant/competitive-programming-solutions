#include <bits/stdc++.h>

#define FI(i,a,b) for(int i=(a);i<=(b);i++)
#define FD(i,a,b) for(int i=(a);i>=(b);i--)

#define LL long long
#define Ldouble long double
#define PI 3.1415926535897932384626

#define PII pair<int,int>
#define PLL pair<LL,LL>
#define mp make_pair
#define fi first
#define se second

using namespace std;

int n, c[105], x;

int main(){
	scanf("%d", &n);
	FI(i, 1, n){
		scanf("%d", &x);
		c[x]++;
	}
	
	int ans = 0;
	
	FI(i, 1, 100) ans += c[i] / 2;
	printf("%d\n", ans);
	return 0;
}
