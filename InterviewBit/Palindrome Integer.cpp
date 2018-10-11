int Solution::isPalindrome(int A) 
{
    int t=0;
    int temp=A;
    while(temp!=0)
    {
        t = (t*10) + (temp%10);
        temp/=10;
    }
    if(t!=A || A<0)
        return 0;
    else
        return 1;
}