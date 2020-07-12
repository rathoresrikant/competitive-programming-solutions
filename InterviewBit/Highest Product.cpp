int Solution::maxp3(vector<int> &A) {
    int n = A.size();
    
    
    
    
    sort(A.begin(), A.end());
    
    int a = A[0]*A[1]*A[n-1];
    int b = A[0]*A[2]*A[n-1];
    int c = A[1]*A[2]*A[n-1];
    int d = A[n-3]*A[n-2]*A[n-1];
    
    if(n==3)
        return d;
    
    
    return max(a,max(b,max(c,d)));
}
