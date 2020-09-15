#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <string>
#include <sstream>
#include <cmath>
#include <ctime>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> pii;
#define mp make_pair

#define REP(i,n) for (int i=0,___=(n); i<___; ++i)
#define FOR(i,a,b) for (int i=(a),___=(b); i<=___; ++i)
#define FORD(i,a,b) for (int i=(a),___=(b); i>=___; --i)

int read() { int n; scanf("%d", &n); return n; }
ll readl() { ll n; scanf("%lld", &n); return n; }
char readc() { static char s[32]; scanf("%s", s); return *s; }

int readLocal() {
	static int i = 0;
	int d[] = {

		100, 6,

		1, 6,  1, 6,  1, 6,  1, 6,  1, 6,  1, 6,

         0,    1,  2,  3,  4,  5, 27,
         1,    2,  3,  4,  5, 27,  7,
         2,    3,  4,  5, 27,  7,  8,
         3,    4,  5, 27,  7,  8,  9,
         4,    5, 27,  7,  8,  9, 10,
         5,   27,  7,  8,  9, 10, 11,
         6,    7,  8,  9, 10, 11, 12,
         7,    8,  9, 10, 11, 12, 13,
         8,    9, 10, 11, 12, 13, 19,
         9,   10, 11, 12, 13, 19, 15,
        10,   11, 12, 13, 19, 15, 16,
        11,   12, 13, 19, 15, 16, 17,
        12,   13, 19, 15, 16, 17, 18,
        13,   19, 15, 16, 17, 18, 14,
        14,   15, 16, 17, 18, 14, 20,
        15,   16, 17, 18, 14, 20, 53,
        16,   17, 18, 14, 20, 53, 22,
        17,   18, 14, 20, 53, 22, 23,
        18,   14, 20, 53, 22, 23, 24,
        19,   20, 53, 22, 23, 24, 25,
        20,   53, 22, 23, 24, 25, 26,
        21,   22, 23, 24, 25, 26,  6,
        22,   23, 24, 25, 26,  6, 28,
        23,   24, 25, 26,  6, 28, 29,
        24,   25, 26,  6, 28, 29, 30,
        25,   26,  6, 28, 29, 30, 42,
        26,    6, 28, 29, 30, 42, 32,
        27,   28, 29, 30, 42, 32, 38,
        28,   29, 30, 42, 32, 38, 34,
        29,   30, 42, 32, 38, 34, 35,
        30,   42, 32, 38, 34, 35, 36,
        31,   32, 38, 34, 35, 36, 37,
        32,   38, 34, 35, 36, 37, 33,
        33,   34, 35, 36, 37, 33, 39,
        34,   35, 36, 37, 33, 39, 40,
        35,   36, 37, 33, 39, 40, 41,
        36,   37, 33, 39, 40, 41, 31,
        37,   33, 39, 40, 41, 31, 43,
        38,   39, 40, 41, 31, 43, 44,
        39,   40, 41, 31, 43, 44, 45,
        40,   41, 31, 43, 44, 45, 62,
        41,   31, 43, 44, 45, 62, 47,
        42,   43, 44, 45, 62, 47, 48,
        43,   44, 45, 62, 47, 48, 49,
        44,   45, 62, 47, 48, 49, 50,
        45,   62, 47, 48, 49, 50, 59,
        46,   47, 48, 49, 50, 59, 52,
        47,   48, 49, 50, 59, 52, 21,
        48,   49, 50, 59, 52, 21, 54,
        49,   50, 59, 52, 21, 54, 55,
        50,   59, 52, 21, 54, 55, 56,
        51,   52, 21, 54, 55, 56, 96,
        52,   21, 54, 55, 56, 96, 58,
        53,   54, 55, 56, 96, 58, 51,
        54,   55, 56, 96, 58, 51, 60,
        55,   56, 96, 58, 51, 60, 61,
        56,   96, 58, 51, 60, 61, 46,
        57,   58, 51, 60, 61, 46, 63,
        58,   51, 60, 61, 46, 63, 64,
        59,   60, 61, 46, 63, 64, 85,
        60,   61, 46, 63, 64, 85, 66,
        61,   46, 63, 64, 85, 66, 67,
        62,   63, 64, 85, 66, 67, 80,
        63,   64, 85, 66, 67, 80, 69,
        64,   85, 66, 67, 80, 69, 76,
        65,   66, 67, 80, 69, 76, 71,
        66,   67, 80, 69, 76, 71, 72,
        67,   80, 69, 76, 71, 72, 73,
        68,   69, 76, 71, 72, 73, 74,
        69,   76, 71, 72, 73, 74, 75,
        70,   71, 72, 73, 74, 75, 70,
        71,   72, 73, 74, 75, 70, 77,
        72,   73, 74, 75, 70, 77, 78,
        73,   74, 75, 70, 77, 78, 79,
        74,   75, 70, 77, 78, 79, 68,
        75,   70, 77, 78, 79, 68, 81,
        76,   77, 78, 79, 68, 81, 82,
        77,   78, 79, 68, 81, 82, 83,
        78,   79, 68, 81, 82, 83, 84,
        79,   68, 81, 82, 83, 84, 65,
        80,   81, 82, 83, 84, 65, 86,
        81,   82, 83, 84, 65, 86, 87,
        82,   83, 84, 65, 86, 87, 88,
        83,   84, 65, 86, 87, 88, 89,
        84,   65, 86, 87, 88, 89, 90,
        85,   86, 87, 88, 89, 90, 91,
        86,   87, 88, 89, 90, 91, 98,
        87,   88, 89, 90, 91, 98, 93,
        88,   89, 90, 91, 98, 93, 94,
        89,   90, 91, 98, 93, 94, 95,
        90,   91, 98, 93, 94, 95, 57,
        91,   98, 93, 94, 95, 57, 97,
        92,   93, 94, 95, 57, 97, 92,
        93,   94, 95, 57, 97, 92, 99,
        94,   95, 57, 97, 92, 99, 92,
        95,   57, 97, 92, 99, 92, 97,
        96,   97, 92, 99, 92, 97, 57,
        97,   92, 99, 92, 97, 57, 95,
        98,   99, 92, 97, 57, 95, 94,

	-1};
	return d[i++];
}
//int read() { return readLocal(); }

inline bool isZero(double v) { return std::abs(v) <= 0.000000001; }

void gauss(vector<vector<double> > &v) {
	int n = v.size();
	REP(i, n) {
		FOR(j, i, n-1) if (!isZero(v[j][i])) {
			if (i != j) {
				std::swap(v[i], v[j]);
			}
		}
		double mn = 1.0 / v[i][i];
		REP(j, v[i].size()) v[i][j] *= mn;
		v[i][i] = 1.0;
		REP(ii, n) if (ii != i) if (!isZero(v[ii][i])) {
			double mn = v[ii][i];
			REP(k, v[ii].size()) v[ii][k] -= mn * v[i][k];
			v[ii][i] = 0.0;
		}
	}

	REP(i, n) printf("%d: %lf\n", i, v[i][n]);
}

void solve() {
	int n = read();
	int k = read();
	vector<double> p(k);
	REP(i, k) {
		p[i] = read();
		p[i] /= read();
	}
	vector<vector<double> > v(n, vector<double>(n+1, 0.0));
	REP(i, n-1) {
		int id = read();
		v[i][id] = 1.0;
		REP(j, k) {
			int id = read();
			v[i][id] -= p[j];
		}
		v[i][n] = 1.0;
	}
	v[3][n] = 2.0; // stop
	v[n-1][n-1] = 1.0;

	gauss(v);
}

void gen() {
	map<int, int> m;
#define mapAdd(a,b) do { m[a] = b; m[b] = a; } while (0)
	mapAdd(6,27);
	mapAdd(14,19);
	mapAdd(33,38);
	mapAdd(31,42);
	mapAdd(21,53);
	mapAdd(51,59);
	mapAdd(46,62);
	mapAdd(57,96);
	mapAdd(92,98);
	mapAdd(65,85);
	mapAdd(68,80);
	mapAdd(70,76);
	REP(i, 100) {
		if (i < 10) printf(" ");
		printf("        %d,  ", i);
		REP(k, 6) {
			int x = i + 1+ k;
			if (x > 99) x = 99 - (x-99);
			if (m.count(x) > 0) x = m[x];
			if (x < 10) printf(" ");
			printf(" %d,", x);
		}
		printf("\n");
	}
}




int id[8][8] = {
	{63,62,60,57,53,48,42,35},
	{61,59,56,52,47,41,34,27},
	{58,55,51,46,40,33,26,20},
	{54,50,45,39,32,25,19,14},
	{49,44,38,31,24,18,13,9},
	{43,37,30,23,17,12,8,5},
	{36,29,22,16,11,7,4,2},
	{28,21,15,10,6,3,1,0}
};

int x[64] = {7,7,6,7,6,5,7,6,5,4,7,6,5,4,3,7,6,5,4,3,2,7,6,5,4,3,2,1,7,6,5,4,3,2,1,0,6,5,4,3,2,1,0,5,4,3,2,1,0,4,3,2,1,0,3,2,1,0,2,1,0,1,0,0};
int y[64] = {7,6,7,5,6,7,4,5,6,7,3,4,5,6,7,2,3,4,5,6,7,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,0,1,2,3,4,5,0,1,2,3,4,0,1,2,3,0,1,2,0,1,0};


ll boardToLL(const vector<string> &b) {
	ll res = 0;
	REP(i, 8) REP(j, 8) if (b[i][j] == '1') res |= 1LL << id[i][j];
	return res;
}

void llToBoard(ll n, vector<string> &b) {
	REP(i, 8) REP(j, 8) b[i][j] = (n & (1 << id[i][j])) != 0 ? '1' : '0';
}





int t[4][4];
#define Q 1
#define P 2
#define R 3
#define B 4
#define N 5

int solveChess(int m) {
	if (m == 0) return false;
	int g = m % 2 == 1 ? 1 : -1;
	
	REP(i, 4) REP(j, 4) {
		int cur = t[i][j] * g;
		if (cur <= 0) continue;
		if (cur == Q) {
			FOR(ii, -1, 1) FOR(jj, -1, 1) if (ii != 0 || jj != 0) {
				FOR(k, 1, 3) {
					int iii = i + k*ii;
					int jjj = j + k*jj;
					if (iii < 0 || 3 < iii || jjj < 0 || 3 < jjj) continue;
					int cur2 = t[iii][jjj] * g;
					if (cur2 > 0) break;
					if (cur2 == -Q) return g;
					t[iii][jjj] = t[i][j];
					t[i][j] = 0;
					int res = solveChess(m - 1);
					t[i][j] = t[iii][jjj];
					t[iii][jjj] = cur2 * g;
					if (g * res > 0) return res;
					if (cur2 < 0) break;
				}
			}
		}
		if (cur == B) {
			FOR(ii, -1, 1) FOR(jj, -1, 1) if (ii != 0 && jj != 0) {
				FOR(k, 1, 3) {
					int iii = i + k*ii;
					int jjj = j + k*jj;
					if (iii < 0 || 3 < iii || jjj < 0 || 3 < jjj) continue;
					int cur2 = t[iii][jjj] * g;
					if (cur2 > 0) break;
					if (cur2 == -Q) return g;
					t[iii][jjj] = t[i][j];
					t[i][j] = 0;
					int res = solveChess(m - 1);
					t[i][j] = t[iii][jjj];
					t[iii][jjj] = cur2 * g;
					if (g * res > 0) return res;
					if (cur2 < 0) break;
				}
			}
		}
		if (cur == R) {
			FOR(ii, -1, 1) FOR(jj, -1, 1) if (ii != 0 || jj != 0) if (ii == 0 || jj == 0) {
				FOR(k, 1, 3) {
					int iii = i + k*ii;
					int jjj = j + k*jj;
					if (iii < 0 || 3 < iii || jjj < 0 || 3 < jjj) continue;
					int cur2 = t[iii][jjj] * g;
					if (cur2 > 0) break;
					if (cur2 == -Q) return g;
					t[iii][jjj] = t[i][j];
					t[i][j] = 0;
					int res = solveChess(m - 1);
					t[i][j] = t[iii][jjj];
					t[iii][jjj] = cur2 * g;
					if (g * res > 0) return res;
					if (cur2 < 0) break;
				}
			}
		}
		if (cur == N) {
			FOR(iii, i-2, i+2) FOR(jjj, j-2, j+2) {
				if ((i-iii)*(i-iii)+(j-jjj)*(j-jjj) != 5) continue;
				if (iii < 0 || 3 < iii || jjj < 0 || 3 < jjj) continue;
				int cur2 = t[iii][jjj] * g;
				if (cur2 > 0) continue;
				if (cur2 == -Q) return g;
				t[iii][jjj] = t[i][j];
				t[i][j] = 0;
				int res = solveChess(m - 1);
				t[i][j] = t[iii][jjj];
				t[iii][jjj] = cur2 * g;
				if (g * res > 0) return res;
			}
		}
		if (cur == P) {
			int ii = g;
			int iii = i + ii;
			int goalIII = g > 0 ? 3 : 0;
			FOR(jjj, j-1, j+1) {
				if (jjj < 0 || 3 < jjj) continue;
				int cur2 = t[iii][jjj] * g;
				if (cur2 > 0) continue;
				if (j == jjj && cur2 < 0) continue;
				if (j != jjj && cur2 == 0) continue;
				if (cur2 == -Q) return g;
				t[iii][jjj] = t[i][j];
				t[i][j] = 0;
				int doRes = 0;
				if (iii == goalIII) {
					t[iii][jjj] = R * g;
					int res = solveChess(m - 1);
					if (g * res > 0) doRes = res;
					if (doRes == 0) {
						t[iii][jjj] = N * g;
						res = solveChess(m - 1);
						if (g * res > 0) doRes = res;
					}
					if (doRes == 0) {
						t[iii][jjj] = B * g;
						res = solveChess(m - 1);
						if (g * res > 0) doRes = res;
					}
				} else {
					int res = solveChess(m - 1);
					if (g * res > 0) doRes = res;
				}
				t[i][j] = P * g;
				t[iii][jjj] = cur2 * g;
				if (doRes != 0) return doRes;
			}
		}
	}
	return -g;
}

bool chess() {
	REP(i, 4) REP(j, 4) t[i][j] = 0;
	int w = read();
	int b = read();
	int m = read();
	if (m % 2 == 0) --m;

	REP(k, w+b) {
		char c = readc();
		int j = readc() - 'A';
		int i = read() - 1;
		switch (c) {
			case 'Q': t[i][j] = Q; break;
			case 'P': t[i][j] = P; break;
			case 'R': t[i][j] = R; break;
			case 'B': t[i][j] = B; break;
			case 'N': t[i][j] = N; break;
		}
		if (k >= w) t[i][j] = -t[i][j];
	}

	return solveChess(m) == 1;
}

int main() {
	int t = read();
	while (t--) {
		printf("%s\n", chess() ? "YES" : "NO");
	}


	int alfa = 5;
	int beta = 5;

	return 0;
}
