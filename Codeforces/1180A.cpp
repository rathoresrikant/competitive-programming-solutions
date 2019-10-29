#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans[105];
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<n+1;i++){
        ans[i]=ans[i-1]+4*i-4;
    }
    cout<<ans[n]<<endl;
    return 0;
}
