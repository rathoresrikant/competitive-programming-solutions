#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,k,i,j,c=0,y,z;
ll arr[1001]={0};
cin>>n>>k;
ll x;
x=(n-1)/2;
if(k>x)
cout<<-1<<"\n";
else
{
    y=n*k;z=0;
    cout<<(n)*k<<endl;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=i+1;j<=n;j++)
        {
           if((arr[i]<k && arr[j]<k)||(arr[i]<k && arr[j]>=k))
           {
            cout<<i<<" "<<j<<"\n";
            arr[i]++;
            z++;
            //cout<<z<<endl;
           }
           else if(arr[j]<k && arr[i]>=k)
           {
            cout<<j<<" "<<i<<"\n";
            arr[j]++;
            z++;
            //cout<<z<<endl;
           }
           else
            break;
           if(z==(y))
            break;
        }
        if(z==(y))
            break;
    }
}
}