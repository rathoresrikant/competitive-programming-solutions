int Solution::romanToInt(string A) {
    int n = A.size();
    vector<int>num(n,0);
    
    for(int i=0 ; i<n ; i++)
    {
        if(A[i]=='I')
            num[i]=1;
        else if(A[i]=='V')
            num[i]=5;
        else if(A[i]=='X')
            num[i]=10;
        else if(A[i]=='L')
            num[i]=50;
        else if(A[i]=='C')
            num[i]=100;
        else if(A[i]=='D')
            num[i]=500;
        else if(A[i]=='M')
            num[i]=1000;
    }
    int ans=0;
    
    for(int i=0 ; i<n ;i++)
    {
        if(i+1<n)
        {
            if(num[i]>=num[i+1])
            {
                ans=ans +num[i];
            }
            else
            {
                ans= ans + num[i+1]-num[i];
                i++;
            }
        }
        else
        {
            ans+=num[i];
            i++;
        }
    }
    return ans;
}
