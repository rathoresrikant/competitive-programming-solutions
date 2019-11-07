//https://www.codechef.com/SEPT19B/problems/FIBEASY
#include<math.h>
#include <bits/algorithmfwd.h>
#include <bits/stdc++.h>
//shashank3007
using namespace std;
#define ll long long
#define ul unsigned long long
int main(){
    ll T;
    cin>>T;
    ll arr[60] = {0};
    arr[0] = 0;
    arr[1] = 1;
    ll sz=60;
    for (ll i = 2; i <= sz; i++)
        {
            (arr[i] = (arr[i - 1] + arr[i - 2]) % 10);
        }
        //<<"=FUNCFIB@"<<i<<endl;
    while(T--){
         ul n0=0;
         ll p=0;
        cin>>n0;
        while(n0>0){
            n0 = n0 / 2;
            p++;
        }
        //cout<<min1<<endl;
        ll re = pow(2, p-1);
        //cout<<"req"<<req<<endl;
        cout<<arr[(re-1)%60]<<endl;
    }
    return 0;
}
