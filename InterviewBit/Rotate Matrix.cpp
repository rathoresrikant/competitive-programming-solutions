void Solution::rotate(vector<vector<int> > &A) {
    for(int i=0 ; i<A.size() ; i++)
    {
        for(int j=i+1 ; j<A.size() ; j++)
        {
            swap(A[i][j],A[j][i]);
        }
    }
}
