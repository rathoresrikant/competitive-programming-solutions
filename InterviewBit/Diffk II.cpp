int Solution::diffPossible(const vector<int> &A, int B) {
    
    unordered_set<int> hash;
    int n=A.size(),i;
    for(i=0;i<n;i++){
        if(hash.find(A[i]-B)!=hash.end() || hash.find(A[i]+B)!=hash.end()){
            return 1;
        }
        else
            hash.insert(A[i]);
    }
    return 0;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}