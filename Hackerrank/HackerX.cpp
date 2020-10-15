/*
Hackerrank Link to problem: https://www.hackerrank.com/challenges/missile-defend/problem
Categories: Algorithm -> Graph Theory
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
#define ll int64_t
#define max 100001
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    pair<ll,ll>vertex[max];
    set<ll>status;
    set<ll>::iterator itr;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll t,f;
        cin>>t>>f;
        
        vertex[i]=make_pair(t+f,t-f);
    }
    sort(vertex,vertex+n);
    for(ll i=0;i<n;i++){
        itr=status.lower_bound(vertex[i].second);
        if(itr!=status.end() && *itr==vertex[i].second){
         continue;   
        }
        if(itr!=status.begin()){
            status.erase(--itr);
        }
        status.insert(vertex[i].second);
    }
    cout<<status.size();
    return 0;
}

