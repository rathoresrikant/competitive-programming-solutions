vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    long long int sum_const=0;
    long long int square_sum=0;
    double P=1;
    
    for(int i=0 ; i<n ; i++)
    {
        sum_const += A[i]-(i+1);
        square_sum += ((long long int)(A[i])*(long long int)(A[i]))-((long long int)(i+1)*(long long int)(i+1));
    }
    
    square_sum = square_sum/sum_const;
    int repeat = (int)(square_sum+sum_const)/2;
    int absent = (int)(square_sum)-repeat;
    vector<int> ans(2);
    ans[0] = repeat;
    ans[1] = absent;
    return ans;
}
