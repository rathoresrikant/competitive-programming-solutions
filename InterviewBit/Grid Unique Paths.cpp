int Solution::uniquePaths(int A, int B) {
    if(A<=1 || B<=1)
    {
        return 1;
    }
    
    long long int den1=1, den2=1, num=1;
    for(int i=1 ; i<B ; i++)
    {
        den2 = den2*(i);
    }
    
    for(int i=A ; i<=A+B-2 ; i++)
    {
        num = num*(i);
    }
    
    return(num/(den2));
}
