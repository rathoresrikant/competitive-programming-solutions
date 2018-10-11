//Min Steps in Infinite Grid
int Solution::coverPoints(vector<int> &A, vector<int> &B) 
{
    long long counter=0;
    int x=0,y=0;
    int temp=0;
    for(int i=1 ; i<A.size(); i++)
    {
        x = abs(A[i]-A[i-1]);
        y = abs(B[i]-B[i-1]);
        
        counter+=max(x,y);
    }
    return counter;
}
