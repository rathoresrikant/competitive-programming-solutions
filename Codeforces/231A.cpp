#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n!=0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>1)
            ans+=1;
        n--;
    }
    cout<<ans<<endl;
    return 0;
}