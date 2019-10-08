#include <bits/stdc++.h>
using namespace std;
 
int n, m, num, pos;
string s = "";
set<int> mySet;
int arr[100005];
int rep[100005];
 
int main() {
	
	scanf("%i%i", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%i", &num);
		arr[i] = num;
	}
	
	for (int i = n; i >= 1; i--) {
		mySet.insert(arr[i]);
		rep[i] = mySet.size();
	}
	
	for (int i = 1; i <= m; i++) {
		scanf("%i", &pos);
		s += to_string(rep[pos]) + "\n";
	}
	cout << s;
	
	return 0;
}
