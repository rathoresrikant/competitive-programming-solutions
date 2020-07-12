int Solution::bulbs(vector<int> &A) {
    int n = A.size();
    
    int i = 0, cnt=0;
    
    while(i<n && A[i]==1)
        i++;
    if(i==n)
        return 0;
    
    int prev=0;
    i++;
    while(i<n){
        if(prev==A[i])
            i++;
        else{
            cnt++;
            prev = A[i];
            i++;
        }
    }
    return cnt+1;
}