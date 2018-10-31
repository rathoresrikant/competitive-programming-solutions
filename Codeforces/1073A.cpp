// Problem link: http://codeforces.com/contest/1073/problem/A

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
     string s;
     
     cin >> n;
     cin >> s;
     bool temp=false;
     for(int i=0;i<n-1;i++){
          
          if(s[i]!=s[i+1]){
               cout<<"YES\n";
               cout<<s[i]<<s[i+1];
               temp=true;
               break;
          }
     }
     if(temp==false){
          cout<<"NO";
     }
     return 0;
}
