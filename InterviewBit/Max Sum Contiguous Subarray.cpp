int Solution::maxSubArray(const vector<int> &A) {
    int max_so_far = A[0];
    int max_ending_here= A[0] ;
 
    for(int i=1 ; i<A.size() ; i++)
    {
        //max_ending_here += A[i];
        max_ending_here = max(A[i], max_ending_here+A[i]);
 
        if(max_ending_here>max_so_far)
            max_so_far=max_ending_here; 
    }
    return max_so_far;
}