// Problem link: http://codeforces.com/contest/1070/problem/K

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
     ll n,k;
     cin >> n >> k;
     int A[n+5],sum=0;
     for(int i=0;i<n;i++){
          cin >> A[i];
          sum += A[i];
     }
     if(sum%k == 0){
         int ans[k];
         int j=0,temp=0;
         for(int i=0;i<n;i++){
              temp+=A[i];
              if(temp == (sum/k)){
                   ans[j++] = (i+1);
                   temp=0;
              }
         }
         if(j==k){
              cout<<"Yes\n";
              cout<<ans[0]<<' ';
              for(int i=1;i<k;i++){
                   cout<<ans[i]-ans[i-1]<<' ';
              }
         }
         else{
              cout<<"No";
         }
     }
     else{
          cout<<"No";
     }
     return 0;
}
