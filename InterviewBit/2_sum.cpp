vector<int> Solution::twoSum(const vector<int> &A, int B) {
    int n = A.size();
    unordered_map<int,int>mp;
    for(int i=n-1;i>=0;i--){
        mp[A[i]] = i+1;
    }
    
    vector<int>ans;
    vector<int>ans2;
    
    ans2.push_back(INT_MAX);
    ans2.push_back(INT_MAX);
    
    vector<int>blnk;
    
    
    for(int i=0;i<n;i++){
        if(mp[B-A[i]]!=0 ){
            int a = i+1, b = mp[B-A[i]];
            if(a>b)
                swap(a,b);
            if(a!=b){
                ans.push_back(a);
                ans.push_back(b);
            }
            //ans.push_back(i+1);
            //ans.push_back(mp[B-A[i]]);
        }
    }
    
    int i=1;
    while(i<ans.size()){
        if(ans[i]<ans2[1]){
            ans2[0] = ans[i-1];
            ans2[1] = ans[i];
        }
        i+=2;
    }
    if(ans.size()==0)
        return ans;
    return ans2;
}
