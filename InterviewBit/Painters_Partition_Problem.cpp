int Solution::paint(int A, int B, vector<int> &C) {
    long left = -1;
    long right = 0;
    long mid, count, flag, sum, i;
    for(i = 0 ; i < C.size() ; i++) {
        if(left < C[i])
            left = C[i];
        right += C[i];
    }
    while(left < right)
    {
        mid = (left + right) / 2;
        count = 1, sum = 0;
        for(i=0;i<C.size();i++)
        {
            sum += C[i];
            if(sum > mid)
            {
                sum = C[i];
                count++;
            }
        }
        if(count > A)
            left = mid + 1;
        else
           right = mid;
    }
    return (right * B) % 10000003;
}