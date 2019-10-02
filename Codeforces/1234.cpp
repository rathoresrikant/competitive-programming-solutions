/*
link. https://codeforces.com/contest/1234/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        string a[2];
        cin>>a[0]>>a[1];
        long int x=0,xx=0;
        for(long int i=0;i<n;i++)
        {   if(a[x][i]=='1' || a[x][i]=='2')
            {
              xx++;
            }
            if(a[x][i]=='3' || a[x][i]=='4' || a[x][i]=='5' || a[x][i]=='6')
            {
                if(a[(x+1)%2][i]=='3' || a[(x+1)%2][i]=='4' || a[(x+1)%2][i]=='5' || a[(x+1)%2][i]=='6') {
                    xx++;
                    x=(x+1)%2;
                }
                else break;
            }
        }
        if(xx==n && x==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
