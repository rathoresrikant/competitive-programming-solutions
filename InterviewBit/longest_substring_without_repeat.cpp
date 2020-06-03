int Solution::lengthOfLongestSubstring(string A) {
    unordered_map<char, int>mp;
    int n = A.size();
    
    for(int i=0;i<n;i++){
        mp[A[i]] = -1;
    }
    
    int cur_len=1, max_len=1;
    int prev;
    mp[A[0]] = 0;
    
    for(int i=1;i<n;i++){
        prev = mp[A[i]];
        if(prev==-1 || i-cur_len>prev){
            cur_len++;
        }
        else{
            if(cur_len>max_len)
                max_len = cur_len;
            cur_len = i-prev;
        }
        mp[A[i]] = i;
    }
    if(cur_len>max_len)
        max_len = cur_len;
    return max_len;
}
