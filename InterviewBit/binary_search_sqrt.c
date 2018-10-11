#include<stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if(num==0)
        return 0;
    if(num==1 || num==2)
        return 1;
    unsigned long int left=0, right=(num+1)/2, mid;
    while(left<=right) {
        mid=(left+right)/2;
        // if(rightsq>num && (right-1)*(right-1) <num)
        //     break;
        if(mid*mid>num)
            right=mid-1;
        else
            left=mid+1;
    }
    printf("%d", right);
    return 0;
}