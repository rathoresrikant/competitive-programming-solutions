//provided by insane-abhi on October-8-2018
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++) {
        long long n, m, x, y;
        cin >> n;
        cin >> m;
        cin >> x;
        cin >> y;
        if (n - 1 >= 0 && m-1 >= 0 && (double) (n - 1) / x == (int) ((n - 1) / x) && (double) (m - 1) / y == (int) ((m - 1) / y))
            cout << "Chefirnemo" << endl;
        else if (n - 2 >= 0 && m-2>=0 && (double) (n - 2) / x == (int) ((n - 2) / x) && (double) (m - 2) / y == (int) ((m - 2) / y))
            cout << "Chefirnemo" << endl;
        else
            cout << "Pofik" << endl;
    }
    return 0;
}