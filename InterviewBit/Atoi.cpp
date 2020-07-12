int Solution::atoi(const string A) {
    int sign=1,base=0,i=0;
    
    while(A[i]==' ')
        i++;

    if(A[i]=='-'|| A[i]=='+')
        sign=(A[i++]=='-')?-1:1;

    while(A[i]>='0' && A[i]<='9')
    {
        if(base>INT_MAX/10 || (base == INT_MAX/10 && A[i]-'0'>7))
        {
            if(sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        base = 10*base + (A[i++]-'0');
    }
    return base*sign;
}