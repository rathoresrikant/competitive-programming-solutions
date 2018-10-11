int Solution::searchInsert(vector<int> &A, int B) {
    int start=0, end=A.size()-1, mid;
    int N=A.size();
    
    while(start<=end)
    {
        mid = (start+end)/2;
        if(A[mid]==B)
            return mid;
        if(A[mid]<B && A[(mid+1)%N]>B  && mid<N-1)
            return mid+1;
        if(A[mid]<B)
            start = mid+1;
        else if(A[mid]>B)
            end = mid-1;
            
        if(mid==end)
            return end+1;
        if(mid==0)
            return 0;
    }
}
