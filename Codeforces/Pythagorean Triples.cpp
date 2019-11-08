// C++ program to print other two sides of right 
// angle traingle given one side 
#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;

// Finds two sides of a right angll starte triangle 
// if it exist. 
void printOtherSides(ll n) 
{ 
    // if n is odd 
    if (n & 1) 
    { 
        // case of n = 1 handled separately 
        if (n == 1) 
            cout << -1 << "\n"; 
        else
        { 
            ll b = (n*n-1)/2; 
            ll c = (n*n+1)/2; 
            cout<<b<<" "<<c<<"\n";
        } 
    } 
    else
    { 
        // case of n = 2 handled separately 
        if (n == 2) 
            cout << -1 <<"\n"; 
        else
        { 
            ll b = n*n/4-1; 
            ll c = n*n/4+1; 
            cout<<b<<" "<<c<<"\n";

        } 
    } 
} 

// Driver program to test above function 
int main() 
{ 
        ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll a;
    cin>>a;
    printOtherSides(a); 
    return 0; 
} 
