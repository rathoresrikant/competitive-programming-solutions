int Solution::isPower(int A) {
    if(A==1)
        return 1;
    
    int lg = log2(A);
    
    for(int i=2 ; i<=sqrt(A) ; i++)
    {
        for(int j=lg ; j>=2 ; j--)
        {
            if(pow(i,j)==A)
            {
                return 1;
            }
        }
    }
    return 0;
}
