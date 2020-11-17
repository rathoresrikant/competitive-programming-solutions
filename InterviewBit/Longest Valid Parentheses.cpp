int Solution::longestValidParentheses(string A) {
    int n=A.length();
    if(n<2)
    return 0;
    if(n==2)
    {
        if(A[0]=='(' && A[1]==')')
        return 2;
        else
        return 0;
    }
    vector<int> longest(n);
    longest[0]=0;
    if(A[1]=='(')
    {
        longest[1]=0;
    }
    if(A[1]==')')
    {
        if(A[0]==')')
        longest[1]=0;
        else
        longest[1]=2;
    }
    
    for(int i=2;i<n;i++)
    {
        if(A[i]==')' && A[i-1]=='(')
        longest[i]=longest[i-2]+2;
        else if(A[i]=='(')
        longest[i]=0;
        else if(A[i]==')' && A[i-1]==')')
        {
            if(A[i-longest[i-1]-1]=='(')
            longest[i]=longest[i-1] + 2+longest[i-longest[i-1]-2];
        }
    }
    int best=0;
    for(int i=0;i<n;i++)
    best=max(best,longest[i]);
    
    return best;
}
