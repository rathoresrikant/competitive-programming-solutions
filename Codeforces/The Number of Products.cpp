#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
ll countOddSum(ll ar[], ll n) 
{ 
    ll o=0,e=0,r=0;
    for (ll i = 0; i <n; i++) { 
       if(ar[i]%2==0)
        e++;
    else
    {
        ll temp=e;
        e=o;
        o=temp+1;
    }
    r=r+o;
    } 
  
    return (r); 
} 
ll countEvenSum(ll arr[], ll n) 
{ 
    // A temporary array of size 2. temp[0] is 
    // going to store count of even subarrays 
    // and temp[1] count of odd. 
    // temp[0] is initialized as 1 because there 
    // a single even element is also counted as 
    // a subarray 
    ll temp[2] = {1, 0}; 
  
    // Initialize count.  sum is sum of elements 
    // under modulo 2 and ending with arr[i]. 
    ll result = 0, sum = 0; 
    for (ll i=0; i<=n-1; i++) 
    { 
        // 2 is added to handle negative numbers 
        sum = ( (sum + arr[i]) % 2 + 2) % 2; 
        temp[sum]++; 
    } 
  
    result = result + (temp[0]*(temp[0]-1)/2); 
    result = result + (temp[1]*(temp[1]-1)/2); 
  
    return (result); 
}  
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,i;
ll arr[200005];
ll count[200005]={0};
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
if(arr[i]<0)
count[i]=1;
}
cout<<countOddSum(count,n)<<" "<<countEvenSum(count,n);
}