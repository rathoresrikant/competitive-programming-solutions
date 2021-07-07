/*

link: https://codeforces.com/contest/1221/problem/C
author: jignesh16
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        cout<<min((a+b+c)/3,min(a,b))<<"\n";
    }
}
