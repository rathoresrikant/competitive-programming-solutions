#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n=1;
    while(n!=0){
        cin>>n;
        if(n==0)
        continue;
        long long int k=n;
        vector<long long int> a;
        while(n!=0){
            
              long long int aa;
              cin>>aa;
              a.push_back(aa);
              n--;

        }
        long long int work=0;
        long long int state=0;
        for(int i=0 ; i<k; i++){
         state=state-a[i];
          work+=abs(state);
        }
    cout<<work<<endl;
    n=1;
    }
}