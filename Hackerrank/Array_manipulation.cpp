#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   vector<vector<int>> queries( m , vector<int> (3)); 
    for(int i = 0; i < m; i++){
        for(int j = 0; j < 3; j++){
            cin>>queries[i][j];
        }
    }
    vector<long long> arr(n,0);
    for(int i=0;i<m;i++){
            int a=queries[i][0];
            int b=queries[i][1];
            long long k=queries[i][2];
            arr[a-1]+=k;
            arr[b]-=k;
        }
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    cout<<*max_element(arr.begin(),arr.end())<<"\n";

    return 0;
}