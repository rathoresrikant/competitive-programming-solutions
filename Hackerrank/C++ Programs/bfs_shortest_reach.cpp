#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the bfs function below.
vector<int> bfs(int n, int m, vector<vector<int>> edges, int s) 
{
    vector <int> adj[n+1];
    vector <int> v;
    for(int i=0;i<m;i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    // BFS starts from here
    int source = s;
    vector <int> color(n+1),d(n+1);
    for(int i=1;i<=n;i++)
    {
        color[i] = 0;
        d[i] = 0;
    }
    color[source] = 1;
    d[source] = 0;
    queue <int> q;
    q.push(source);
    while(q.empty() != 1)
    {
        int u = q.front();
        q.pop();
        for(int j = 0; j < adj[u].size();j++)
        {
            int v = adj[u][j];
            if(color[v] == 0)
            {
                d[v] = d[u] + 1;
                q.push(v);
                color[v] = 1;
            }
        }
        color[u] = 2;
    }
    for(int k=1; k <= n; k++ )
    {
        if(k != source)
        {
            if(d[k] == 0)
            v.push_back(-1);
            else
            v.push_back(d[k]*6);
        }
    }
    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string nm_temp;
        getline(cin, nm_temp);

        vector<string> nm = split_string(nm_temp);

        int n = stoi(nm[0]);

        int m = stoi(nm[1]);

        vector<vector<int>> edges(m);
        for (int i = 0; i < m; i++) {
            edges[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> edges[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int s;
        cin >> s;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = bfs(n, m, edges, s);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
