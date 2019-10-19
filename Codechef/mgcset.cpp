// Problem link : https://www.codechef.com/problems/MGCSET

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t,n,m,a,count=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m;
        count=0;
        for(int j=0;j<n;j++){
            cin>>a;
            if(a%m==0)
            count++;
        }
        long int ans = pow(2,count)-1;
        cout<<ans<<endl;
        
    }
    return 0;
}
