int Solution::findMinXor(vector<int> &A) {
    int n=A.size();
    
    if(n==1)
        return A[0];
    int min=A[0]^A[1];
    sort(A.begin(), A.end());
    
    for(int i=0 ; i<n-1 ; i++)
    {
        int temp = A[i]^A[i+1];
        if(temp<min)
            min=temp;
    }
    return min;
}
