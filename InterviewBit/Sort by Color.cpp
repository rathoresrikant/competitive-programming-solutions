void Solution::sortColors(vector<int> &A) {
    vector<int>arr(3,0);
    for(int i=0 ; i<A.size() ; i++)
    {
        if(A[i]==0)
            arr[0]++;
        else if(A[i]==1)
            arr[1]++;
        else 
            arr[2]++;
    }
    int t=0;
    for(int i=0 ; i<A.size() ;)
    {
        while(arr[t]>0 && t<3)
        {
            A[i]=t;
            i++;
            arr[t]--;
        }
        
        t++;
    }
}
