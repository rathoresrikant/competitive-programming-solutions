#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    bool* sieve=new bool [1000020]; // of size n +1 as elements start from 0
    for(int i=0;i<1000020;i++){
        sieve[i]=true;
    }                           // O(n(log(logn)))
    sieve[0]=false;
    sieve[1]=false;

    for(int i=2;i*i<1000020;i++){   // i will run fron 0 to sqrt(n)
        for(int j=i*i;j<1000020;j+=i){  // j will start from i*i and will be incremented by i
            sieve[j]=false;
        }
    }
    int * arr=new int[1000020];
    for(int i=0;i<1000020;i++){
        arr[i]=0;
    }
    int i=0;
    while(i<1000020){
        if(sieve[i]){
            for(int j=i;j<1000020;j+=i){
                arr[j]++;
            }
        }
        i++;
    }
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        long ans=0;
        for(int j=n;j<m;j++){
            ans+=arr[j];
        }
        cout<<ans<<endl;
    }
    delete []arr,sieve;
}