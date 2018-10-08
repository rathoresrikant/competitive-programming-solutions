
  // Problem Link: http://codeforces.com/contest/1047/problem/B
  
#include<bits/stdc++.h>
using namespace std;

int main(){
     ll n;
     cin >> n;
     ll ans=0;
     for(int i=0;i<n;i++){
          ll x,y;
          cin >> x >> y;
          ans = max(ans,x+y);
     }
     cout<<ans;
     return 0;
}
