vector<int> Solution::getRow(int A) {
    vector<vector<int> >vec(A+1);
    vec[0] = {1};
    
    if(A==0) 
        return vec[A];
    
    vec[1] = {1,1};
    for(int i=2 ; i<=A ; i++)
    {
        vector<int> temp(i+1);
        temp[0]=1;
        temp[i]=1;
        
        for(int j=1 ; j<i ; j++)
        {
            temp[j] = vec[i-1][j]+vec[i-1][j-1];
        }
        vec[i] = temp;
    }

    return vec[A];
}
