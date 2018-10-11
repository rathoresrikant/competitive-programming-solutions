vector<int> Solution::primesum(int A) {
    vector<bool> isPrime (A+1,1);
    isPrime[0]=0;
    isPrime[1]=0;
    
    for(int i=2 ; i*i<=A ; i++)
    {
        if(isPrime[i]==1)
        {
            for(int j=i*2 ; j<A ; j = j+i)
            {
                isPrime[j] = 0;
            }
        }
    }
    vector<int>rtr;
    for (int i=0; i<A; i++)
    {
        if (isPrime[i]==1 && isPrime[A-i]==1)
        {
            //cout << i << " " << (n-i);
            rtr.push_back(i);
            rtr.push_back(A-i);
            return rtr;
        }
    }
    return rtr;
}