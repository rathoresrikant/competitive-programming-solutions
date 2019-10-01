#include<iostream>
#include<list>
#include<vector>

using namespace std;

class Graph {
	int V;
	int time;
	int *startTime, *endTime;
	list<int> *adj;

	public:
		Graph(int V) {
			this -> V = V;
			adj = new list<int>[V + 1];
		}

		void addEdge(int, int);
		int DFS(int);
		int DFS_Visit(int, bool[]);
};

void Graph::addEdge(int V, int W) {
	adj[V].push_back(W);
}

int Graph::DFS(int u) {
	bool *visited = new bool[V + 1];
	
	for(int i = 1; i < V + 1; i++)
		visited[i] = false;

	time = 0;

	return DFS_Visit(u, visited);
}

int Graph::DFS_Visit(int u, bool visited[]) {

	visited[u] = true;
	list<int>::iterator i;	

	int totalDepth = 0;

	for(i = adj[u].begin(); i != adj[u].end(); i++) {
		if(!visited[*i]) {
			totalDepth = max(totalDepth, DFS_Visit(*i, visited));
		}
	}

	return totalDepth + 1; 
}

int main() {

	int n, p;
	cin >> n;
	Graph g(n);

	vector<int> noManagerEmployee;

	for(int i = 1; i < n + 1; i++) {
		cin >> p;

		if(p != -1) {
			g.addEdge(p, i);
		}

		else {
			noManagerEmployee.push_back(i);
		}
	}

	vector<int>::iterator i;
	int result = 0;

	for(i = noManagerEmployee.begin(); i != noManagerEmployee.end(); i++) {
		result = max(result, g.DFS(*i));
	}

	cout << result;

	return 0;
}

