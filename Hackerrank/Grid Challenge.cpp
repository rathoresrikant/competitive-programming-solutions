#include <bits/stdc++.h>

using namespace std;

// Complete the gridChallenge function below.
string gridChallenge(vector<string> Grid) {
  size_t jj, n = Grid.size();
    bool is_not = false;
    for (int i = n-1; i >= 0; i--) {
        string& r = Grid[i];
 
        sort(begin(r),end(r));
 
        if (i == n-1) continue;
        string& p = Grid[i+1];
 
         for (int j = 0; j < n; j++) {
 
             if (int(r[j]) > int(p[j])) {
                 is_not = true; break;
             }
         }
        if (is_not) break;
    }
    return (is_not?"NO":"YES");
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
        }

        string result = gridChallenge(grid);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
