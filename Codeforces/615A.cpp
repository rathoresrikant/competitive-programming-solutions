#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    int check[m+1]={m+1};
    for(int i=0;i<n;i++){
        cin>>x;
        int y[x];
        for(int j=0;j<x;j++){
            cin>>y[j];
            check[y[j]]=y[j];
        }
    }
    sort(check,check+m+1);
    check[0]==0?cout<<"NO":cout<<"YES";
return 0;
}
