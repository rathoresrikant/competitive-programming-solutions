//Problem link : http://codeforces.com/contest/1073/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define mod (1e9 + 7)
#define max(a,b) (a<b ? b : a)
#define min(a,b) (a>b ? b : a)

ll power(ll a,ll b){
     if(b==1){
          return a;
     }
     if(b%2==1){
          return a*power(a,b-1);
     }
     else{
          return power(a*a,b/2);
     }
}
int main(){
    int n;
    cin >> n;
    int a[n+5],b[n+5];
    int ans[n+5];
    memset(ans,1000000,sizeof(ans));
    int cnt=0;
    for(int i=0;i<n;i++){
         cin >> a[i];
    }
    for(int i=0;i<n;i++){
         cin >> b[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
         if(ans[b[j]]==0){
              i--;
              j++;continue;
         }
        if(a[i] != b[j]){
             cnt++;
             ans[a[i]] = 0;
        }
        else{
             ans[b[j]] = cnt+1;cnt=0;j++;
        }
        
    }
    for(int i=0;i<n;i++){
         cout<<ans[b[i]]<<" ";
    }
     return 0;
}
