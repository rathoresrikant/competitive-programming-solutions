vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> >num(A);
    if(A==0)
        return {{}};
    else if(A==1)
        return {{1}};
    else if(A==2)
        return {{1},{1,1}};
    else
    {
        num[0].push_back(1);
        num[1].push_back(1);
        num[1].push_back(1);
        
        for(int i=2 ; i<A ; i++)
        {
            num[i].push_back(1);
            for(int j=1 ; j<=i-1 ; j++)
            {
                num[i].push_back(num[i-1][j]+num[i-1][j-1]);
            }
            num[i].push_back(1);
        }
    }
    return num;
}
