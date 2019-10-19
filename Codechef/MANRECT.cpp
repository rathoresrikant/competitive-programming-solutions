#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define m 1000000000
int main() {
ll t;
cin>>t;
while(t--) {
    cout<<"Q"<<" "<<"0"<<" "<<"0"<<endl;
    fflush(stdout);
    ll d1;
    cin>>d1;
    cout<<"Q"<<" "<<"0"<<" "<<m<<endl;
    fflush(stdout);
    ll d2;
    cin>>d2;
    cout<<"Q"<<" "<<m<<" "<<"0"<<endl;
    fflush(stdout);
    ll d4;
    cin>>d4;
    cout<<"Q"<<" "<<"0"<<" "<<(m+d1-d2)/2<<endl;
    fflush(stdout);
    ll d5;
    cin>>d5;
    ll a = d5;
    ll b = d1-a;
    ll c = m+b-d4;
    ll d = m+a-d2;
    cout<<"A"<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    fflush(stdout);
    ll eva;
    cin>>eva;
}
}
