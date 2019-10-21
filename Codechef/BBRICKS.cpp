//JAI MATA DI
//LETS ROCK

#include<bits/stdc++.h>
using namespace std;


#define ll long long int
#define mod 1000000007

ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);

    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}




ll modInverse(ll b, ll m)
{
    ll x, y; // used in extended GCD algorithm
    ll g = gcdExtended(b, m, &x, &y);

    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;

    // m is added to handle negative x
    return (x%m + m) % m;
}



ll modDivide(ll a, ll b)
{
    a = a % mod;
    int inv = modInverse(b, mod);
    if (inv == -1)
       return a/b;
    else
       return (inv * a) % mod;
}

ll mulmod(ll a, ll b)
{
    ll res = 0; // Initialize result
    a = a % mod;
    while (b > 0)
    {
        // If b is odd, add 'a' to result
        if (b % 2 == 1)
            res = (res + a) % mod;

        // Multiply 'a' with 2
        a = (a * 2) % mod;

        // Divide b by 2
        b /= 2;
    }

    // Return result
    return res % mod;
}

inline ll bc(int n, int k)
{
     if(k>n)
        return 0;

    ll res = 1;

    if ( k > n - k )
        k = n - k;


    for (ll i = 0; i < k; ++i)
    {
        ll a= (n - i);
        ll b = (i + 1);
        res= mulmod(res,modDivide(a,b));
    }

    return res;
}




   int main()
{
     int test;
       cin>>test;

    cin.tie(0);
    cout.tie(0);

    while(test--){

        ll n,k;
         cin>>n>>k;

         if(n==k)
            cout<<"2\n";

       else{
         ll r=0;
         ll ans=0;
         while(r<k){

         ll a= bc(k-1,r);
         ll b= bc(n+1+r-k,k);

        //cout<<"a "<<a<<"\n";
         //cout<<"b "<<b<<"\n";



        ans+=(2)*mulmod(a,b);

        //cout<<"ans "<<ans<<"\n";
          r++;
         }


    cout<<(ans)%1000000007;

    cout<<"\n";

       }

}

}
