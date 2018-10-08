
  //Problem Link : https://www.codechef.com/AUG18B/problems/GCDMOD
  
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M (1000*1000*1000 + 7)

ll power(__int128 a,__int128 b,ll m){
    __int128 result = 1;
    while(b>0){
        if(b%2==1){
            result = (result*a)%m;b--;
        }
        a = (a*a)%m;b/=2;
    }
    return result;
}
//Know more about init data type : https://stackoverflow.com/questions/8832114/what-does-init-mean-in-the-linux-kernel-code
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        ll a,b,n,x,y;
        cin >> a >> b >> n;
        if(a!=b){
            x = power(a,n,a-b);
            y = power(b,n,a-b);
        }
        else{
            x = power(a,n,M);
            y = power(b,n,M);
        }
       if(x+y==0){
           cout<<(a-b)<<"\n";
       }
       else
        cout<<(__gcd((x+y),a-b))%M<<"\n";
    }
    return 0;
}
