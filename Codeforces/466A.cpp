#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int cost;
    if(m*a<=b){
        cost=n*a;
    } else {
        int tickets,rides;
        tickets = n/m;
        cost = b*tickets;
        rides = m*tickets;

        if(n-rides>0){
            cost += min(b,(n-rides)*a);
        }
    }
    cout<<cost<<endl;
    return 0;
}
