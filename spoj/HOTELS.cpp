/******************************************
* AUTHOR : AAYUSH GARG*
* NICK : aayushgarg_03 *
* INSTITUTION : BIT MESRA *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define dd double
#define ld long double
#define for0(i, n) for(ll i = 0; i < n; i++)
#define for2(a,b,c) for(ll i=a;i<b;i+=c)
#define for1(i,n) for(ll i=1;i<=n;i++)
#define vec vector<ll>
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define VP vector< pii >
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define ascii(c) (int)char (c)
#define all(v) (v).begin(),(v).end()
#define Sort(v) sort(v.begin(), v.end(), sortbysec);
#define N 1000000






ll findMaxSubarraySum(ll arr[], ll n, ll sum)  
{  
     
    ll curr_sum = arr[0], max_sum = 0, start = 0;  
  
    
    for (ll i = 1; i < n; i++) {  
  
         
        if (curr_sum <= sum)  
           max_sum = max(max_sum, curr_sum);  
  
        
        while (curr_sum + arr[i] > sum && start < i) {  
            curr_sum -= arr[start];  
            start++;  
        }  
          
         
        curr_sum += arr[i];  
    }  
  
     
    if (curr_sum <= sum)  
        max_sum = max(max_sum, curr_sum);  
  
    return max_sum;  
}  
int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll n,m;
cin>>n>>m;

ll a[n];

for0(i,n)
 cin>>a[i];

cout<<findMaxSubarraySum(a,n,m);



return 0;
}
