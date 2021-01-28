#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n,temp,res=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>temp;
    res=res^temp;
}
cout<<res<<"\n";
return 0;
}