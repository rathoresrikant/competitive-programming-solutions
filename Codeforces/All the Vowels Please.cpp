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
ll t,x,a,b,c=0,i,j,y,z;
cin>>t;
char arr[10]={'a','e','i','o','u','a','e','i','o','u'};
char ans[100][100];
	x=(ll)ceil(sqrt(t));
	while(t%x!=0)
	{
		x--;
	}
	a=x;
	b=t/x;
	//cout<<a<<b<<endl;
	if(a<5 || b<5)
		cout<<-1<<endl;
	else
	{
		ll d=0;
    for(i=0;i<a;i++)
    {
    	x=i%5;
    	for(j=x;j<b+x;j++)
    	{
    		y=j%5;
    		ans[i][d]=arr[y];
    		cout<<arr[y];
    		d++;
    	}
    	//cout<<ans[d][0];
    }
   // cout<<d;
    //cout<<ans[1][0];
    // for(i=0;i<a;i++)
    // {
    // 	for(j=0;j<b;j++)
    // 		cout<<ans[i][j];
    // }
	}
}