int Solution::trailingZeroes(int A) {
    int i = 5;
    int i5=0;
    
    int temp = A;
    //i5 = A/5;
    
    while(temp!=0)
    {
        i5 += A/i;
        temp = temp/i;
        i*=5;
    }
    return i5;
}
