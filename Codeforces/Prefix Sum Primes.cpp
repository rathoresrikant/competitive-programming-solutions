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
ll n,i,sum=0,c1=0,c2=0,x;
cin>>n;
//if i have 0 1s primes=1(that is 2)
//if i have 1 1 and rest 2s(2,3,5,7,) i can visit eah prime
//if i have 2 1s (2,3,)
for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)
            c1++;
        else
            c2++;
    }
if(c1>=1 && c2>=1)
{
cout<<2<<" ";
cout<<1<<" ";
c1--;
c2--;
while(c2!=0)
{
        cout<<2<<" ";
c2--;
}
while(c1!=0)
{
        cout<<1<<" ";
c1--;
}
}
else if(c1==0 && c2>=1)
{
while(c2!=0)
{
        cout<<2<<" ";
c2--;
}
}
else if(c1>=0 && c2==0)
{
while(c1!=0)
{
        cout<<1<<" ";
c1--;
}
}


}