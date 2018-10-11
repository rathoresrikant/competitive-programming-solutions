int Solution::lengthOfLastWord(const string A) {
    int n =A.size();
    while(A[n-1]==' ')
        n = n-1;
        
    int count=0;
    for(int i=n-1 ; i>=0 ; i--)
    {
        if(A[i]==' ')
            break;
        count++;
    }
 return count;   
}
