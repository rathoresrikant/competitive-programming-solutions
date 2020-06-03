int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map<int, int>mp;
    int n = A.size();
    
    if(n==1)
        return 0;
    for(int i=0;i<n;i++){
        mp[A[i]]++;
    }
    
    if(B==0){
        for(int i=0;i<n;i++){
            if(mp[A[i]]==2)
                return 1;
        }
        return 0;
        
    }
    
    else{
        for(int i=0;i<n;i++){
            if(mp[A[i]+B]==1 || mp[A[i]-B]==1)
                return 1;
        }
        return 0;
    }
}
