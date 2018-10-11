void Solution::setZeroes(vector<vector<int> > &A) {
    vector<pair<int,int> > value;
    int r=1;
    int c=1;
    for(int i=0 ; i<A.size() ; i++)
    {
        if(A[i][0]==0)
        {
            c=0;
            break;
        }
    }
    for(int i=0 ; i<A[0].size() ; i++)
    {
        if(A[0][i]==0)
        {
            r=0;
            break;
        }
    }
    
    
    for(int i=0 ; i<A.size() ; i++)
    {
        for(int j=0 ; j<A[0].size() ; j++)
        {
            if(A[i][j]==0)
            {
                A[i][0]=-1;
                A[0][j]=-1;
            }
        }
    }
    
    for(int i=1 ; i<A.size() ; i++)
    {
        if(A[i][0]==-1)
        {
            for(int j=0 ; j<A[0].size() ; j++)
            {
                A[i][j]=0;
            }
        }
    }
    
    for(int i=1 ; i<A[0].size() ; i++)
    {
        if(A[0][i]==-1)
        {
            for(int j=0 ; j<A.size() ; j++)
            {
                A[j][i]=0;
            }
        }
    }
    
    if(r==0)
    {
        for(int j=0 ; j<A[0].size() ; j++)
        {
            A[0][j]=0;
        }
    }
    if(c==0)
    {
        for(int j=0 ; j<A.size() ; j++)
        {
            A[j][0]=0;
        }
    }
    
}
