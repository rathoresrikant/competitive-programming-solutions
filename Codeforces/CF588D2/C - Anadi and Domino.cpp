
1230 C - Anadi and Domino.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define str string
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 10;
const ll LINF = LLONG_MAX;

int n, col[N], ans;
bool edge[N][N], vis[6][6];
 
void solve() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (edge[i][j]) {
                vis[col[i]][col[j]] = true;
            }
        }
    }
    int cur = 0;
    for (int i = 0; i < 6; ++i) {
        for (int j = i; j < 6; ++j) {
            cur += vis[i][j];
            vis[i][j] = false;
        }
    }
    ans = max(ans, cur);
}
 
void dfs(int i) {
    if (i == n) {
        return solve();
    }
    for (int &j = col[i] = 0; j < 6; ++j) {
        dfs(i + 1);
    }
}
 

int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
      int m;
      cin>>n>>m;
      int i,x,y;
      f(i,0,m){
          cin>>x>>y;
          x--;
          y--;
         
          edge[x][y]=true;
          edge[y][x]=true;
      }   
      dfs(0); 
      cout<<ans;

    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 
1230 C - Anadi and Domino.cpp GNU C++17 Wrong answer on pretest 8
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define str string
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 1e5 + 10;
const ll LINF = LLONG_MAX;

ll n,m,x,y;
ll adj[10][10];
 
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
    cin>>n>>m;
   for(ll i=0;i<m;i++)
   {
      cin>>x>>y;
      adj[x][y]=1;
      adj[y][x]=1;
      adj[x][0]++;
      adj[y][0]++;
   }
   ll count=-1;
   f(t,0,6)
   {
   ll max=0;
   for(ll i=1;i<=n;i++)
   {
      if(adj[i][0]>adj[max][0])
      {
         max=i;
      }
   }
   if(count!=-1)
      count+=adj[max][0];
   else
   {
      count=0;
   }

   adj[max][0]=0;
   for(ll i=1;i<=n;i++)
   {
      if(adj[max][i])
      {
         adj[i][0]--;
         adj[max][i]=0;
         adj[i][max]=0;
 
      }
   }
 
   }
   if(n>6&&m!=0)
   {
      cout<<count+1;
   }
   else
      cout<<m;
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
1230 C - Anadi and Domino.cpp GNU C++17 Compilation error
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,m,x,y;
	cin>>n>>m;
	int deg[n];
	memset(deg,0,sizeof(deg));
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		deg[x-1]+=1;
		deg[y-1]+=1;
	}
	if(n<7)
	cout<<m<<endl;
	if(n==7)
	{
		int minDeg = *min_element(deg,deg+n);
		int maxDeg = *max_element(deg,deg+n);
		int ans;
		if(maxDeg!=6)
			ans = m-minDeg+1;
			OUT 1<<endl
		else
			ans = m-minDeg;
		cout<<ans<<endl;	}
	return 0;
}
1230 C - Anadi and Domino.cpp GNU C++17 Wrong answer on pretest 9
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define str string
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 1e5 + 10;
const ll LINF = LLONG_MAX;
 
 
vector<bool>visit(500,false);
vector<ll>adj[500];

ll deg[100];
ll n,m;
  
 void dfs(ll i)
  {
       
        visit[i]=true;
 
 
        for(auto s:adj[i])
        {
            if(visit[s]==false)
            { 
              dfs(s);
            
            }
        }
        
    }

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif
    ll in[10]={0};
    
  
    cin>>n>>m;
 
    ll i,x,y;
    f(i,0,m)
    {
       cin>>x>>y;
       adj[x].pb(y);
       adj[y].pb(x);  
       deg[x-1]++;
       deg[y-1]++;
    }
    // if(n<7)
    // {
    //   cout<<m;
    //   return 0;
    // }
    ll count=0;
    for(ll i=1;i<n;i++)
    {
            if(visit[i]==false)
            {   
                dfs(i);
                count++;
            
            }
    }
    if(count>1)
    {
      cout<<m;
      return 0;
    }
    ll mi=1000;
    f(i,0,7){
      
      mi=min(mi,deg[i]);
    }
        if(mi>0)
        {
            cout<<m-mi+1;
        }
        else cout<<m;
        
    
 
 
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
 
}
1230 C - Anadi and Domino.cpp GNU C++17 Wrong answer on pretest 9
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define str string
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 1e5 + 10;
const ll LINF = LLONG_MAX;
 
 
vector<bool>visit(500,false);
vector<ll>adj[500];

ll deg[100];
ll n,m;
  
 void dfs(ll i)
  {
       
        visit[i]=true;
 
 
        for(auto s:adj[i])
        {
            if(visit[s]==false)
            { 
              dfs(s);
            
            }
        }
        
    }

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
    #endif
    ll in[10]={0};
    
  
    cin>>n>>m;
 
    ll i,x,y;
    f(i,0,m)
    {
       cin>>x>>y;
       adj[x].pb(y);
       adj[y].pb(x);  
       deg[x-1]++;
       deg[y-1]++;
    }
    if(n<7)
    {
      cout<<m;
      return 0;
    }
    ll count=0;
    for(ll i=1;i<n;i++)
    {
            if(visit[i]==false)
            {   
                dfs(i);
                count++;
            
            }
    }
    if(count>1)
    {
      cout<<m;
      return 0;
    }
    ll mi=1000;
    f(i,0,7){
      mi=min(mi,deg[i]);
    }
        if(mi>0)
        {
            cout<<m-mi+1;
        }
        else cout<<m;
        
    
 
 
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
 
}