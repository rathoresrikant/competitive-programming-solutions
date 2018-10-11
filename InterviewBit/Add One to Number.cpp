vector<int> Solution::plusOne(vector<int> &A) {
    int sum=1;
    for(int i=A.size()-1 ; i>=0 ; i--)
    {
        A[i] = A[i]+sum;
        if(A[i]%10==0)
            A[i] = A[i]%10;
        else
        { 
            sum=0;
            break;
        }
    }
    
    if(sum!=0)
    {
        A.push_back(-1);
        for(int i=A.size()-1 ; i>=0 ; i--)
        {
            A[i+1] = A[i];
        }
        A[0]=1;
    }
    
    while(A[0]==0)
        A.erase(A.begin());
    
    return A;
}
