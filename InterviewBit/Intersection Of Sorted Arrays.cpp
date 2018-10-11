vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int j=0,i=0;
    vector<int> Arr;
    while(i<A.size() && j<B.size())
    {
        if(A[i]==B[j])
        {
            int temp=A[i];
            Arr.push_back(temp);
            i++;
            j++;
        }
        
        else if(A[i]<B[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return Arr;
}
