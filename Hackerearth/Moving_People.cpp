#include<bits/stdc++.h>
#define ll          long long
#define lli         long long int
#define pb          push_back
#define endl	'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define present(c,x)	((c).find(x) != (c).end())
#define pow9        1000000007
#define rep(i,a,b)	for(lli i=a;i<b;i++)
#define iterate(a)	for(auto ptr = a.begin();ptr!=a.end();ptr++)
#define print(a)	iterate(a){ cout<<*ptr<<"  "; } cout<<endl;
#define setval(a,val)	memset(a,val,sizeof(a))
#define flush       cin.ignore(numeric_limits<streamsize>::max(),'\n')
 
using namespace std;
 
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m,q;
	cin>>n>>m>>q;
	int A[n][m];
	string str;
	rep(i,0,n){
	    cin>>str;
	    rep(j,0,m){
	    A[i][j]=str[j]-'0';
	    }
	}
 
 
    int dp[n+1][m+1];
    rep(i,0,n+1){
    dp[i][0]=0;
    }
    rep(i,0,m+1){
    dp[0][i]=0;
    }
 
    rep(i,1,n+1){
        rep(j,1,m+1){
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+A[i-1][j-1];
        }
    }
 
 
	int x1=0,y1=0,x2=m,y2=n;
	int x_z1=0,x_z2=0,y_z1=0,y_z2=0;
	rep(i,0,q){
	int t;
	cin>>t;
	if(t==2){
        if(x2>=x1&&y2>=y1){
            cout<<dp[y2][x2]+dp[y1][x1]-dp[y2][x1]-dp[y1][x2]<<endl;
        }
        else{
            cout<<"0\n";
        }
	}
	else{
        int x,y;
        cin>>x>>y;
        if(x>0){
            x_z1-=x;
            if(x_z1<0){
                x1-=x_z1;
                x_z1=0;
            }
 
    x_z2=m-x_z1-x2+x1;
        }
    else if(x<0){
        x=x*-1;
        x_z2-=x;
        if(x_z2<0){
            x2+=x_z2;
            x_z2=0;
        }
 
    x_z1=m-x_z2-x2+x1;
    }
 
    if(y>0){
         y_z1-=y;
         if(y_z1<0){
            y1-=y_z1;
            y_z1=0;
         }
         y_z2=n-y_z1-y2+y1;
        }
    else if(y<0){
        y=y*-1;
        y_z2-=y;
        if(y_z2<0){
            y2+=y_z2;
            y_z2=0;
        }
         y_z1=n-y_z2-y2+y1;
    }
	}
	}
	return 0;
}
