
// Problem Link: http://codeforces.com/contest/448/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
     ll a,b,k;
     scanf("%lld %lld %lld",&a,&b,&k);
     ll mn = 1ll,mx = (250000000000ll);
     while(mn<mx){
          ll x = (mn+mx)/2;
          ll cnt = 0;
          for(ll i=1;i<=a;i++){
               cnt += min(x/i ,b);
               if(x < i)break;
          }
          if(cnt<k){
               mn = x+1;
          }
          else{
               mx = x;
          }
     }
     printf("%lld",mn);
     return 0;
}
