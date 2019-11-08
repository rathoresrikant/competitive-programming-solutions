#include "bits/stdc++.h"
#define MODULO 1000000007
#define endl '\n'
using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main(){
	ios_base::sync_with_stdio(0);
	string s;
	cin >> s;
	int ct = ceil( s.size()/2 );
	string k = s.substr(0, ct);
	reverse(k.begin(), k.end());
	s = s.substr(ct, s.size()-ct);
	reverse(s.begin(), s.end());
	cout << k << s << endl;

	return 0;
}

