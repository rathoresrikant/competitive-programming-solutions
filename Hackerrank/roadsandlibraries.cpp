#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
struct Node{
    int parent;
    int size;
};
int find(Node nodes[],int x)
{
    if(nodes[x].parent==x)
        return x;
    else
        nodes[x].parent=find(nodes,nodes[x].parent);
    return nodes[x].parent;
}
void merge(Node nodes[],int x,int y)
{
    int xroot=find(nodes,x);
    int yroot=find(nodes,y);
    if(nodes[xroot].size<nodes[yroot].size)
    {
        nodes[yroot].size+=nodes[xroot].size;
        nodes[xroot].parent=yroot;
    }
    else
    {
        nodes[xroot].size+=nodes[yroot].size;
        nodes[yroot].parent=xroot;
    }
}

// Complete the roadsAndLibraries function below.
long roadsAndLibraries(int n, int c_lib, int c_road, vector<vector<int>> cities) {
    Node* nodes=new Node[n];
    for(int i=0;i<n;i++)
    {
        nodes[i].parent=i;
        nodes[i].size=1;
    }
    for(int i=0;i<cities.size();i++)
    {
        for(int j=0;j<2;j++)
        {
            merge(nodes,cities[i][0]-1,cities[i][1]-1);
        }
    }
    long sum=0;
    for(int i=0;i<n;i++)
    {
       // cout<<nodes[i].parent<<endl;
        if(nodes[i].parent==i)
            sum++;
    }
    long cost=0;
    cost+=(sum*c_lib);
    if(c_lib<c_road)
    {
        cost+=((n-sum)*c_lib);
    }
    else
    {
        cost+=((n-sum)*c_road);
    }
    return cost;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string nmC_libC_road_temp;
        getline(cin, nmC_libC_road_temp);

        vector<string> nmC_libC_road = split_string(nmC_libC_road_temp);

        int n = stoi(nmC_libC_road[0]);

        int m = stoi(nmC_libC_road[1]);

        int c_lib = stoi(nmC_libC_road[2]);

        int c_road = stoi(nmC_libC_road[3]);

        vector<vector<int>> cities(m);
        for (int i = 0; i < m; i++) {
            cities[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> cities[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        long result = roadsAndLibraries(n, c_lib, c_road, cities);

        fout << result << "\n";
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
