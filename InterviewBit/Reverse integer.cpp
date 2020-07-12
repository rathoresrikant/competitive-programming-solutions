int Solution::reverse(int A) {
    if(A==0)
        return 0;
    int temp = abs(A);
    int bak=0;
    while(temp!=0)
    {
        if(bak>INT_MAX/10)
            return 0;
        bak =(bak*10) + (temp%10);
        temp = temp/10;
    }
    if(A<0)
        return (-1*bak);
    else
        return bak;
}
