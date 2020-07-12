int Solution::maximumGap(const vector<int> &A) {
    int max_diff;
    int i,j;
    
    vector<int>left(A.size());
    vector<int> right(A.size());
    
    left[0] = A[0];
    for(i=1 ; i<A.size() ; i++)
        left[i] = min(A[i],left[i-1]);
    
    right[A.size()-1] = A[A.size()-1];
    for(j=A.size()-2 ; j>=0 ; j--)
        right[j] = max(right[j+1], A[j]);

    i=0,j=0,max_diff=0;
    while(j<A.size() && i<A.size())
    {
        if(left[i]<=right[j])
        {
            max_diff = max(max_diff,j-i);
            j = j+1;
        }
        else
            i = i+1;
    }
    return max_diff;
}