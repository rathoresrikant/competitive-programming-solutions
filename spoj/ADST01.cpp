#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define fastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll MOD=1e9+7;

// in this question it can be seen all required numbers will be as 6 , 56 , 556 , 5556 , 55556 and so on ....
// for this series a formula can be generated 

ll powll( ll a, ll b)
{    
     if(b==0)
     return 1;
     if(b%2==0)
     {
          return powll((a*a)%MOD,b/2);
     }
     else
     {
          return ((a%MOD) * (powll((a*a)%MOD,b/2) %MOD ))%MOD ;
     }
}
ll modinv(ll a) // This modinv works only when MOD is prime
{
   return powll(a,MOD-2);
}

int main()
{       fastIO
        ll t, n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            ll i=0;
            ll sum=((n%MOD)*6)%MOD;
            ll series;
            series=powll(10,n)-1;
            series=(series%MOD * modinv(9))%MOD;
            series=series-n;
            series=(series%MOD * modinv(9) * 50)%MOD;
            sum=(sum%MOD + series%MOD)%MOD;
            
            cout<<sum<<"\n";
        }

   
        return 0;
}