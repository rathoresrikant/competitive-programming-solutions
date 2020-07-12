string Solution::longestCommonPrefix(vector<string> &A) {
    string s;
    int j=0;
    char temp;
    if(A.size()==0)
        return s;
    
    if(A.size()==1)
    {
        for(int i=0 ; i<A[0].size() ; i++)
            s.push_back(A[0][i]);
            
        return s;
    }
    
    while(j<A[0].size())
    {
        temp=A[0][j];
        for(int i=1 ; i<A.size() ; i++)
        {
            if(A[i][j]!=temp)
            {
                return s;
            }
        }
        s.push_back(temp);
        j++;
    }
    return s;
}
