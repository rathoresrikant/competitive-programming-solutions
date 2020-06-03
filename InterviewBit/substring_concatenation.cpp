vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    
    vector<int>ans;
    
    if(A.size()<B[0].size() || B.size()==0)
        return ans;
        
    unordered_map<string, int>mp, mp2;
    
    for(int i=0;i<B.size();i++)
        mp[B[i]]++;
        
    int w = B[0].size();
    
    for(int i=0;i<A.size();i++){
        if(mp.find(A.substr(i,w)) != mp.end()){
            int j = i;
            mp2 = mp;
            string word = A.substr(j,w);
            
            while(mp2.find(word)!=mp2.end() && j<A.size()){
                if(mp2[word]==1)
                    mp2.erase(word);
                else
                    mp2[word]--;
                
                j+=w;
                word = A.substr(j,w);
            }
            if(mp2.empty())
                ans.push_back(i);
        }
    }
    return ans;
}
