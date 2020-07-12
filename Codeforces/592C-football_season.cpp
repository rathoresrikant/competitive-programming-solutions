#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX pow(10, 5)
int main(){
    
        ll n,p,d,w;
        ll x, z, y = 0;
        cin >> n >> p >> w >> d;
        for(;y < MAX; y++){
            x = (p-y*d) / w;
            if((x*w + y*d) != p || x < 0)continue;
            z = n-x-y;
            if(z < 0) continue;
            cout << x << " " << y << " " << z << endl;
            return 0;
        }
            cout << "-1" << endl;
        
    return 0;
}