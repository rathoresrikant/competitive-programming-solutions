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
ll n,x,i,l=0,m=0,a,b;
vector<ll>arr1;
vector<ll>arr2;
cin>>n;
arr1.push_back(0);
arr2.push_back(0);
for(i=0;i<n;i++)
{
    cin>>x;
    arr1.push_back(x);
}
for(i=0;i<n;i++)
{
    cin>>x;
    arr2.push_back(x);
}
sort(arr1.begin(),arr1.end());
sort(arr2.begin(),arr2.end());
ll c=0;
while(arr1.size()>1 || arr2.size()>1)
{
    a=arr1.back();
    b=arr2.back();
    if(c%2==0)
    {  
      if(b>a)
        arr2.pop_back();
    else
    {
        l=l+a;
        arr1.pop_back();
    }
    }
    else
    {
        if(a>b)
            arr1.pop_back();
        else
        {
            m=m+b;
            arr2.pop_back();
        }

    }
    c++;
    // if(c==10)
    //     break;
}
cout<<(l-m)<<"\n";


}