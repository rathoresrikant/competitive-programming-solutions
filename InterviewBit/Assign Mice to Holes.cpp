

int Solution::mice(vector<int> &A, vector<int> &B) {
    int n = A.size();
    sort(A.begin(), A.end());
    
    sort(B.begin(), B.end());
    
    
    int mx = abs(A[0]-B[0]);
    
    for(int i=1;i<n;i++){
        mx = max(mx, abs(A[i]-B[i]));
    }
    
    return mx;
}

