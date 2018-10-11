int Solution::strStr(const string A, const string B) {
    if(A.size()==0)
        return -1;
    if(B.size()==0)
        return -1;
    
    int index=-1;
    int j;
    bool FLAG=1;
    for(int i=0 ; i<A.size() ; i++)
    {
        if(A[i]==B[0])
        {
            index=i;
            j=0;
            FLAG=1;
            
            while(j<B.size())
            {
                if(A[i]!=B[j])
                {
                    FLAG=0;
                    break;
                }
                i++;
                j++;
            }
            if(FLAG==0)
            {
                i=index;
                index=-1;
            }
            else
                return index;
            
        }
    }
    return index;
}
