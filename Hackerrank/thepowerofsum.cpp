//The Power Sum


#include <iostream>
#include <vector>
using namespace std;

int ipow(int b, int e) {
    if (e == 0)
        return 1;
    return e == 0 ? 1 : b * ipow(b, e - 1);
}

int count_expressions(int x, int n, vector<int>& vals) {
    
    int s = 0;
    for (int v : vals) {
        s += ipow(v, n);
    }

    if (s == x) {
        return 1;
    } else {
        int answer = 0;
        int v = vals.empty() ? 1 : vals.back() + 1;
        while (s + ipow(v, n) <= x) {
            vals.push_back(v);
            answer += count_expressions(x, n, vals);
            vals.pop_back();
            v++;
        }
        return answer;
    }
}

int main() {
    int x, n;
    cin >> x >> n;
    vector<int> vals;
    cout << count_expressions(x, n, vals) << endl;
}
