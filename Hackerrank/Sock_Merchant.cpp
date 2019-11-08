#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
       int n,count=0; 
    scanf("%d",&n);
    int *s = (int *)calloc(100,sizeof(int));
    for(int c_i = 0; c_i < n; c_i++){
       int c;
       scanf("%d",&c);
       s[c] ++;
       if(s[c]%2 == 0){
           s[c]=0;
           count++;
       }
    }
    printf("%d",count);/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
