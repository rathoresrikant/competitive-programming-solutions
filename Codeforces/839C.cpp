#include<iostream>
#include<iomanip>
#include<list>
#include<vector>

using namespace std;

class Graph {
	public:
		int V;
		vector<int> *adj;
		double *distance;
		bool *visited;
		double ans = 0;

		void addEdge(int, int);
		Graph(int);
		void DFS(int);
		void DFS_Visit(int, bool[], double);
};

void Graph::addEdge(int a, int b) {
	adj[a].push_back(b);
}

Graph::Graph(int V) {
			this->V = V;

			distance = new double[V + 1];
			adj = new vector<int>[V + 1];

			for(int i = 0; i <= V; i++) {
				distance[i] = -1;
			}

			for(int i = 1; i < V; i++) {
				int u, v;
				cin >> u >> v;

				addEdge(u, v);
				addEdge(v, u);
			}
}

void Graph::DFS(int s) {
	visited = new bool[V + 1];

	for(int i = 0; i <= V; i++)
		visited[i] = false;

	distance[s] = 0;

	DFS_Visit(s, visited, 1);

}

void Graph::DFS_Visit(int u, bool *visited, double prob) {
	visited[u] = true;
	double p = adj[u].size();
	// cout << prob << endl;
	// cout << "p: " << p << " u: " << u << endl;

	if(p == 1) {
		ans += prob * distance[u];
	}

	if(p > 1 && u != 1)
		p -= 1;

	// if(p > 1)
	// 	p -= 1;

	for(int v: adj[u]) {
		// cout << v;
		if(!visited[v]) {
			distance[v] = distance[u] + 1;
			DFS_Visit(v, visited, (1 / p) * prob);
		}
	}
}


int main() {
	int n;
	cin >> n;
	Graph g(n);
	g.DFS(1);
	cout << setprecision(20) << g.ans;

	return 0;
}