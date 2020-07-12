// Problem Link: http://codeforces.com/contest/934/problem/D

#include<bits/stdc++.h>
using namespace std;
#define MIN 2
#define mp make_pair
#define ll long long int
int k;
ll p;
int negadesimal(){
    int x = p%k;
    if(x<0) x+=k;
    return x%k;
}


int main(){
    scanf("%lld%d",&p,&k);
    int ans[150],cnt=0;
    while(p!=0){
        cnt++;
        ans[cnt] = negadesimal();
        p -= negadesimal();
        p /= (-k);
    }
    printf("%d\n",cnt);
    
    for(int i=1;i<=cnt;i++){
        printf("%d ",ans[i]);        
    }
    printf("\n");
    return 0;
}
