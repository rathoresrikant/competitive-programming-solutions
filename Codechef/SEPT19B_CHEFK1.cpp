#include<bits/stdc++.h>
using namespace std;
int main()
{
    #define int long long
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1&&(m==0||m==1))
        cout<<m<<endl;
        else if(n==2&&m==1)
        cout<<1<<endl;
        else if(m<n-1||m>(n*(n-1))/2+n)
        cout<<-1<<endl;
        else if(m<=n+1)
        cout<<2<<endl;
        else if(m<=2*n)
        cout<<3<<endl;
        else
        {
            long long v=((m-2*n)*2-1)/n;
            cout<<v+4<<endl;
        }
    }
}
