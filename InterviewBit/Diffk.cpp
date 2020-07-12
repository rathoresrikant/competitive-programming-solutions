int Solution::diffPossible(vector<int> &A, int B) {
    if(A.size()<=1)
        return 0;
    int n=A.size();
    
    if(A[n-1]-A[0]<B)
        return 0;
    int i=0,j=1;
    
    while(i<n && j<n)
    {
        if(i==j)
        {
            j++;
            continue;
        }
        if(A[j]-A[i]==B)
            return 1;
        else if(A[j]-A[i]<B)
            j++;
        else if(A[j]-A[i]>B)
            i++;
    }
    return 0;
}
