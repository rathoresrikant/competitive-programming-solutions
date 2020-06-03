vector<int> Solution::lszero(vector<int> &A) {
    int n = A.size();
    
    int sum = 0, max_len = 0, max_strt=-1, max_end=-1;
    unordered_map<int, int>mp;
    mp[sum] = -1;
    
    for(int i=0;i<n;i++){
        sum += A[i];
        
        if(mp[sum]==0){
            mp[sum] = i+1;
        }
        else{
            if(mp[sum] == -1) // to handle the corner case when the subarray starts from 1st element
                mp[sum] = 0;  // mp can't point to 0 as its the default for all, so for time being its used as -1, changed to 0 while calculating length and again set to -1 before coming out of loop
            int len = i - (mp[sum]-1);
            if(len>max_len){
                max_len = len;
                max_strt = mp[sum];
                max_end = i;
            }
            if(mp[sum] == 0)
                mp[sum] = -1;
        }
    }
    
    vector<int>ans;
    if(max_strt==-1)
        return ans;
    for(int i=max_strt; i<=max_end; i++){
        ans.push_back(A[i]);
    }
    return ans;
}
