int Solution::sqrt(int A) {
    long long int start = 0, end = A/2, mid;
    if(A==0 || A==1)
        return A;
    
    while(start<=end)
    {
        mid = (start+end)/2;
        
        if(mid*mid == A)
            return mid;
        if(mid*mid<A && (mid+1)*(mid+1)>A)
            return mid;
        if(mid*mid<A)
            start = mid+1;
        else if(mid*mid>A)
            end = mid-1;
    }
}
