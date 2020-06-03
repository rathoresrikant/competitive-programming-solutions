vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
    
    int n = A.size();
    
    unordered_map<string, vector<int>>mp;
    
    for(int i=0;i<n;i++){
        string str = A[i];
        sort(str.begin(), str.end());
        
        mp[str].push_back(i+1);
    }
    
    vector<vector<int>>ans;
    
    for(auto i:mp){
        ans.push_back(i.second);
    }
    
    return ans;
    
}
