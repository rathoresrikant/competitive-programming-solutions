#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second

using namespace std;

const int N=3e5+5;
const int MOD=1e9+7;
const long long INF=1e18;

typedef long long ll;
typedef long double ld;

void inlld(ll &a){scanf("%lld", &a);}
void ind(int &a){scanf("%d", &a);}

 
typedef vector < int > vi ;
typedef pair < int, int > pii ;
 
struct flowEdge {
    int u, v ;
    ll cap, flow = 0 ;
    flowEdge(int x, int y, ll capacity): u(x), v(y), cap(capacity) {}
};
 
struct Dinic {
    vector < flowEdge > edges ;
    vector < vi > adj ; // Stores the ID of flowEdges
    vi level, ptr ; // Stores the pointer of the edge which can be used next
    queue < int > q ;
    int n, m = 0;
    int s, t ;
 
    /* Convention used :
    Whenever we add a forward edge, flow is increased in that direction with cap unchanged.
    For each backward edge, cap is set to 0 and flow is taken in -ve which denotes
    the flow flowing in opposite ie. forward direction.
    */
 
    Dinic(int nodes, int source, int sink)
    {
        n = nodes + 1; s = source ; t = sink ;
        edges.clear(); while(!q.empty()) q.pop();
        adj.resize(n); level.resize(n); ptr.resize(n);
    }
 
    void addEdge(int u, int v, ll cap)
    {
        edges.push_back({u, v, cap}); edges.push_back({v, u, 0});
        adj[u].push_back(m++); adj[v].push_back(m++);
    }
 
    bool bfs()
    {
        fill(level.begin(), level.end(), -1);
        while(!q.empty()) q.pop();
        q.push(s); level[s] = 0 ;
        while(!q.empty())
        {
            int u = q.front(); q.pop();
            for(int id : adj[u])
            {
                int v = edges[id].v; ll cap = edges[id].cap, flow = edges[id].flow ;
                if(level[v] != -1) continue ;  // Already seen node
                if( (cap - flow) < 1) continue ; // Can't take saturated/back edge
                q.push(v); level[v] = level[u] + 1 ;
            }
        }
        return level[t] != -1 ; // Return whether t is reachable from s
    }
 
    ll dfs(int u, ll incFlow)
    {
        if(u == t) return incFlow ;
        ll curFlow, outFlow = 0 ;
        for(int& index = ptr[u]; index < adj[u].size(); index++)
        {
            int id = adj[u][index] ;
            int& v = edges[id].v ; ll& cap = edges[id].cap ;
 
            if(level[v] != (level[u] + 1) ) continue ;
            if( (cap - edges[id].flow ) < 1) continue ;
 
            curFlow = dfs(v, min(incFlow, cap - edges[id].flow) );
 
            edges[id].flow += curFlow ;
            edges[id^1].flow -= curFlow ; // BackEdge of current edge (to undo/augment)
 
            outFlow += curFlow ;
            incFlow -= curFlow ;
            if(incFlow < 1) break ;
        }
        return outFlow ;
    }
 
    void printer()
    {
        for(auto edge : edges)
            cout << edge.u << " " << edge.v << " " << edge.cap << " " << edge.flow << "\n" ;
    }
 
    ll findMaxFlow()
    {
        ll flow = 0 ;
        while(bfs()) // Make layered graph of the network
        {
            fill(ptr.begin(), ptr.end(), 0);
            flow += dfs(s, INF); // Calculates the blocking flow of the network
        }
        return flow ;
    }
 
};



int n, m;
ll x;
vector<pair<int, ll> >orgedge[55];


int main()
{
	ind(n);ind(m);inlld(x);
	while(m--)
	{
		int u, v;
		ll w;
		ind(u);ind(v);inlld(w);
		orgedge[u].pb({v, w});
	}
	ld lo=0.0000001, hi=1e9, mid;
	while(hi-lo>0.000000000001)
	{
		mid=(lo+hi)/2.0;
		Dinic solve(n, 1, n);
		for(int a=1; a<=n; a++)
			for(auto v:orgedge[a])
				solve.addEdge(a, v.f, v.s/mid);
		ll here=solve.findMaxFlow();
		if(here>=x)
			lo=mid;
		else
			hi=mid;
		// printf("%Lf %Lf %Lf\n", lo, mid, hi);
		// if(check(mid)>=x)
		// 	lo=mid;
		// else
		// 	hi=mid;
	}
	mid*=x;
	printf("%0.10Lf\n", mid);
	return 0;
}