int Solution::colorful(int A) {
    
    unordered_map<int,int>mp;
    int B = A;
    vector<int>ar;
    while(B!=0){
        ar.push_back(B%10);
        B /= 10;
    }
    int n = ar.size();
    
    for(int len=1;len<=n;len++){
        for(int i=0;i<=n-len;i++){
            int mul = 1;
            for(int j=0;j<len;j++){
                mul*=ar[i+j];
            }
            if(mp[mul]!=0)
                return 0;
            mp[mul]++;
        }
        
    }
    return 1;
}
