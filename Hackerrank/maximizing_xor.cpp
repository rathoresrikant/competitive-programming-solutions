#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int l,r,max_xor=0;
cin>>l>>r;
for(int i=l;i<r;i++){
    for(int j=i+1;j<=r;j++){
        if((i^j)>max_xor)
            max_xor=i^j;
    }
}
cout<<max_xor<<"\n";
return 0;
}