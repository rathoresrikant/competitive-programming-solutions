
  //Problem Link: http://codeforces.com/contest/1047/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll int
#define mp make_pair
#define pb push_back
const int  C = 15000100;  // Define size for predefine Array
const int  L = 100; //Upper bound for computation
#define min(a,b) (a<b ? a : b)

ll d[C];
ll ans[C][3]; // Store answer's three different cases

int main(){
     for(int i=2;i<C;i++){
          if(d[i]!=0)continue;
          ans[i][0] = L;
          
          for(int j=i;j<C;j+=i){
               if(d[j]==0){
                    d[j] = i;
               }
          }
          
     }     
     ll n;
     scanf("%d",&n);
     ll x;
     for(int i=0;i<n;i++){
          cin >> x;
          while(x>1){
               ll p = d[x];
               ans[p][2]++;
               int k=0;
               while(x%p == 0){
                    x/=p;
                    k++;
               }
               if(k < ans[p][0]){
                    ans[p][0] = k;
                    ans[p][1] = 0;
               }
               if(k==ans[p][0]){
                    ans[p][1]++;
               }
          }
     }
     ll final = n;
     for(int x=2;x<C;x++){
          if(d[x]!=x) continue;
          if(ans[x][0] == L) continue;
          if(ans[x][2] != n){
               final = min(final,n-ans[x][2]);
               continue;
          }
          final = min(ans[x][1],final);
     }
     if(final == n){
          cout<<-1;
     }
     else{
          cout<<(final);
     }
     return 0;
}
