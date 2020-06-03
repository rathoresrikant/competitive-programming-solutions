int Solution::candy(vector<int> &A) {
    int n = A.size();
    
    vector<int>frd(n,1);
    vector<int>brd(n,1);
    
    for(int i=1;i<n;i++){
        if(A[i]>A[i-1])
            frd[i] = frd[i-1]+1;
    }
    for(int i=n-2;i>-1;i--){
        if(A[i]>A[i+1])
            brd[i] = brd[i+1]+1;
    }
    
    int cnt = 0;
    
    for(int i=0;i<n;i++){
        cnt += max(frd[i], brd[i]);
    }
    return cnt;
}
