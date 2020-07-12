int Solution::search(const vector<int> &A, int B) {
    int start=0, end=A.size()-1, mid, prev, next;
    int N = A.size();
    int index=0;
    
    while(start<=end)
    {
        mid = (start+end)/2;
        
        if(A[start]<=A[end])
        {
            index = start;
            break;
        }
        prev = (mid-1+N)%N;
        next = (mid+1)%N;
        
        if(A[mid]<=A[prev] && A[mid]<=A[next])
        {
            index =  mid;
            break;
        }
        
        if(A[mid]<A[end])
            end = mid-1;
        else if(A[mid]>A[end])
            start = mid+1;
    }
    int start1=0, end1=index-1, mid1;
    int start2 = index, end2 = A.size()-1, mid2;
    
    while(start1<=end1)
    {
        mid1 = (start1+end1)/2;
        if(A[mid1]==B)
            return mid1;
        else if(A[mid1]>B)
            end1 = mid1-1;
        else if(A[mid1]<B)
            start1 = mid1+1;
    }
    
    while(start2<=end2)
    {
        mid2 = (start2+end2)/2;
        if(A[mid2]==B)
            return mid2;
        else if(A[mid2]>B)
            end2 = mid2-1;
        else if(A[mid2]<B)
            start2 = mid2+1;
    }
    return -1;
}
