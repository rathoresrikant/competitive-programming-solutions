int Solution::majorityElement(const vector<int> &A) {
    int n = A.size();
    
    unordered_map<int, int>mp;
    
    for(int i=0;i<n;i++){
        mp[A[i]]++;
        if(mp[A[i]]>n/2)
            return A[i];
    }
}
