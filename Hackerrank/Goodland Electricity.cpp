#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(i=0;i<n;i++)
#define forin(i,s,n) for(i=s;i<n;i++)
#define revo(i,s) for(i=s;i>=0;i--)
#define rev(i,s,e) for(i=s;i>=e;i--)
#define pb push_back
#define ll long long
#define endl "\n"
#define PI 3.14159265


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //Input Method Defined
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n,k,i;
    cin>>n>>k;
    int ar[n];
    forn(i,n)cin>>ar[i];
    i = k-1;
    int cnt = 0;
    while(i>=0 && i<n)
    {
        // cout<<i<<endl;
        if(ar[i] == 1)
        {
            cnt++;
            ar[i] = -1;
            // cout<<"cnt = "<<cnt<<endl;
            if(i + k-1>=n-1)break;
            i+=2*k-1;
            i = min(i,n-1);
        }
        else if(ar[i] == -1)
        {
            cnt = -1;
            break;
        }
        else i--;
    }

    if(cnt==0)cout<<"-1";
    else cout<<cnt;

}
