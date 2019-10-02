/** PROBLEM: https://www.hackerrank.com/challenges/power-of-large-numbers/problem
 * Concept : https://www.hackerearth.com/notes/get-the-modulo-of-a-very-large-number-that-cannot-be-stored-in-any-data-type-in-cc-1/
*/


#include<iostream>
#include<string>
#include<vector>
#include<math.h>


typedef long long int ll;

using namespace std;

ll solve(string a, string b) {
   ll base = 0;
   ll exp = 0;
   
    ll MOD = 1000000007;

   for(ll i=0;i<a.size();i++){
       base = (base*10 + (a[i]-'0')) % MOD;
   } 
   for(ll i=0;i<b.size();i++){
       exp = (exp*10 + (b[i]-'0')) % (MOD-1);
   }

    ll ans = 1LL;

    while(exp){
        if(exp&1){
            ans = (ans*base) % MOD;
        }
        base = (base*base) % MOD;
        exp = exp/2;
    }
    return ans%MOD;

}

int main()
{
    

    int t;
    cin >> t;
    

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string a, b;
        cin >> a >> b;
        ll result = solve(a, b);
        cout << result << "\n";
    }

    
    return 0;
}

