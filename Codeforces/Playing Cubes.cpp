#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d %d",(n+m-1-min(n,m)),min(n,m));
}
