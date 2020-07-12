#include <bits/stdc++.h>
using namespace std;
int main() {
// your code goes here
    int t,n,i,c;
    long long k;
    int arr[10001];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        c = k % (n*3);
        for(i=0;i<c;i++)
        {
            int a = i % n;
            int b = n - (i%n)-1;
            arr[a] = arr[a] ^ arr[b];
        }
        if(n%2!=0 && k>=(n/2 + 1))
            arr[n/2] = 0;
        for(i=0;i<n;i++)
           cout<< arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
