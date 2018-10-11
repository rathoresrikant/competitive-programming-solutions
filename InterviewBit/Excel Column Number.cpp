int Solution::titleToNumber(string A) {
    int n=A.size();
    int i=0,counter=0;
    
    while(n!=0)
    {
        n--;
        char temp=A[i];
        counter+= ((int)temp-(int)'A'+1)*pow(26,n);
        i++;
    }
    return counter;
}
