vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int> >arr( A , vector<int> (A) );
    
    int left=0,right = A-1, up=0, down=A-1;
    int dir=0;
    int count=1;
    
    while(left<=right && up<=down)
    {
        if(dir==0)
        {
            for(int i=left ; i<=right ; i++)
            {
                arr[up][i]=count;
                count++;
            }
            dir=1;
            up++;
        }
        else if(dir==1)
        {
            for(int i=up ; i<=down ; i++)
            {
                arr[i][right]=count;
                count++;
            }
            right--;
            dir=2;
        }
        else if(dir==2)
        {
            for(int i=right ; i>=left ; i--)
            {
                arr[down][i]=count;
                count++;
            }
            down--;
            dir=3;
        }
        else if(dir==3)
        {
            for(int i=down ; i>=up ; i--)
            {
                arr[i][left]=count;
                count++;
            }
            left++;
            dir=0;
        }
    }
    return arr;
}
