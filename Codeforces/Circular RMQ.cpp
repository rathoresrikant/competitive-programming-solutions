#include<bits/stdc++.h>
using namespace std;
int st[(int)1e7],ar[2*(int)1e6+100],lazy[(int)1e7];
int query(int ind , int L , int R , int i , int j){
	if(R < i || L > j) return 1e9;
	if(L >= i && R <= j) return st[ind]+lazy[ind];
	int mid = (L+R)/2;
	return min(query(ind*2,L,mid,i,j),query(ind*2+1,mid+1,R,i,j))+lazy[ind];
}
void updtlazy(int ind , int L , int R , int i , int j , int val){
	if(R < i || L > j) return;
	if(L >= i && R <= j){
		lazy[ind] += val;
		return;
	}
	int mid = (L+R)/2;
	updtlazy(ind*2,L,mid,i,j,val);
	updtlazy(ind*2+1,mid+1,R,i,j,val);
	st[ind] = min(st[ind*2]+lazy[ind*2],st[ind*2+1]+lazy[ind*2+1]);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n; cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin>>ar[i];
		updtlazy(1,0,n-1,i,i,ar[i]);
	}
	int m; cin >> m;
	string s; getline(cin, s);
	for(int i = 0 ; i < m ; i++){
		int l, r, v;
		getline(cin, s);
		stringstream ss; ss << s;
		if(ss >> l >> r >> v) {
			if(l <= r) updtlazy(1, 0, n-1, l, r, v);
			else updtlazy(1, 0, n-1, 0, r, v), updtlazy(1, 0, n-1, l, n-1, v);
		}else{
			if(l <= r) cout << query(1, 0, n-1, l, r) << endl;
			else cout << min(query(1, 0, n-1, 0, r), query(1, 0, n-1, l, n-1)) << endl;
		}
	}
}
