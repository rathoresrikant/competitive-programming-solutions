/* Hackerrank Dynamic Array problem */

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

int main()
{
    int n, q;
    cin >> n >> q;

    vector<vector<int>> s(n, vector<int>());
    int lastAnswer = 0;
    for (int i = 0; i < q; i++)
    {
        int t, x, y;
        cin >> t >> x >> y;

        if (t == 1)
        {
            s[(x ^ lastAnswer) % n].push_back(y);
        }
        else
        {
            lastAnswer = s[(x ^ lastAnswer) % n][y % s[(x ^ lastAnswer) % n].size()];
            cout << lastAnswer << endl;
        }
    }
}
