// Problem link : http://codeforces.com/contest/1073/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define F first
#define S second


int main(){
     ll n,tot;
     cin >> n >> tot;
     ll a[n+5];
     ll sum = 0,temp=0,prev=-1,ans=0;
     ll cnt=0;
     for(int i=0;i<n;i++){
          cin >> a[i];
          if(sum+a[i]<=tot){
               sum += a[i];
               cnt++;
          }
     }
     if(sum!=0)
        temp=(tot/sum);
     tot -= sum*temp;
     ans = temp*cnt;
     while(prev != tot){
          cnt = 0;
          sum = 0;
          
          for(int i=0;i<n;i++){
               if(sum + a[i] <= tot){
                    sum += a[i];
                    cnt++;
               }
          }
          if(sum!=0)
               temp=(tot/sum);
          prev = tot;
          tot -= sum*temp;
          ans += temp*cnt;
     }
     cout<<ans;
     return 0;
}
