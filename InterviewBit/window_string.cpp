string Solution::minWindow(string A, string B) {
    int n1 = A.size();
    int n2 = B.size();
    
    unordered_map<char, int>hash_pat;
    unordered_map<char, int>hash_str;
    
    for(int i=0;i<n2;i++)
        hash_pat[B[i]]++;
        
    int strt=0, final_strt = -1, count=0, min_len = INT_MAX;
    
    for(int j=0;j<n1;j++){
        hash_str[A[j]]++;
        
        if(hash_pat[A[j]]!=0 && hash_str[A[j]]<=hash_pat[A[j]]){
            count++;
        }
        
        if(count==n2){
            while(hash_str[A[strt]]>hash_pat[A[strt]] || hash_pat[A[strt]]==0){
                if(hash_str[A[strt]]>hash_pat[A[strt]])
                    hash_str[A[strt]]--;
                strt++;
            }
            
            int len_win = (j+1)-strt;
            if(min_len>len_win){
                min_len = len_win;
                final_strt = strt;
            }
        }
    }
    
    if(final_strt==-1)
        return "";
        
    return A.substr(final_strt, min_len);
}
