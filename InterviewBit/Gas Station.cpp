int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int n = A.size();
    
    if(n==1){
        if(A[0]>=B[0])
            return 0;
        else
            return -1;
    }
    
    for(int i=0;i<n;i++){
        if(A[i]>=B[i]){
            int strt;
            if(i==n-1)   
                strt = 0;
            else
                strt = i+1;
            int fuel = A[i]-B[i];
            int flag = 0;
            while(strt!=i){
                fuel += A[strt];
                if(B[strt]>fuel)
                    flag++;
                else{
                    fuel -= B[strt];
                    strt++;
                    if(strt==n)
                        strt = 0;
                    if(strt==i)
                        return i;
                }
                if(flag>0)
                    break;
            }
        }
        
    }
    return -1;
}
