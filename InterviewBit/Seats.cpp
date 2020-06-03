int Solution::seats(string A) {
    int n = A.size();
    
    vector<int>pos;
    
    for(int i=0;i<n;i++){
        if(A[i]=='x')
            pos.push_back(i);
    }
    
    n = pos.size();
    int mid = n/2;
    
    int steps = 0;
    
    for(int i=0;i<n;i++){
        int strt = pos[i];
        int dest = pos[mid] - (mid-i);
        
        steps += abs(dest-strt);
        
        steps %= 10000003;
    }
    
    return steps;
}
