vector<int> Solution::wave(vector<int> &A) 
{
    if(A.size()<=1)
        return A;
    int temp = 0;
    sort(A.begin(), A.end());
    if(A.size()%2==0)
    {
        for(int i=0 ; i<A.size()-1 ; i=i+2)
        {
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
    }
    else
    {
        for(int i=0 ; i<A.size()-2 ; i=i+2)
        {
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
    }
    return A;
}
