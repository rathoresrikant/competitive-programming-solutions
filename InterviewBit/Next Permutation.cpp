void Solution::nextPermutation(vector<int> &A) {
    int n = A.size();
    bool FLAG = 0;
    int start=0;
    
    for(int i=n-1 ; i>0 ; i--)
    {
        if(A[i]>A[i-1])
        {
            //swap(A[i-1],A[n-1]);
            start = i-1;
            FLAG=1;
            break;
        }
    }
    if(FLAG==0)
        return reverse(A.begin(),A.end());
    
    
    int min=INT_MAX;
    int index = start+1;
    
    for(int i=index+1 ; i<n ; i++)
    {
        if(A[start]<A[i] && A[i]<A[index])
        {
            index = i;
        }
    }
    
    swap(A[start],A[index]);
    
    sort(A.begin()+(start+1) , A.end());
    //return A;
}
