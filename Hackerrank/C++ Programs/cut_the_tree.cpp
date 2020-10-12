// problem link = https://www.hackerrank.com/challenges/cut-the-tree/problem

#include<bits/stdc++.h>
using namespace std;

int arr[100005], dp[100005], x[100005], y[100005];
vector<int> v[100005];

int precompute(int node) {
    if(dp[node] != 0) { return 0;}
    dp[node] = arr[node];
    for(int i = 0; i < v[node].size(); i++) {
        dp[node] += precompute(v[node][i]);
    }
    return dp[node];
    
}

int main() {
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++){
        cin >> x[i] >> y[i];
        v[x[i]].push_back(y[i]);
        v[y[i]].push_back(x[i]);
    }
    memset(dp, 0, sizeof dp);
    precompute(1);
    int mins = 1000000007;
    for(int i = 0; i < n - 1; i++) {
        int temp1 = dp[x[i]];
        int temp2 = dp[y[i]];
        if(temp1 < temp2) swap(temp1, temp2);
        mins = min(mins, abs(dp[1] - 2 * temp2));
    }
    cout << mins << endl;
}
