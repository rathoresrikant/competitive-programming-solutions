#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);

    size_t N, M;
    size_t yan_count = 0, yan_time = 0;
    size_t nathan_count = 0, nathan_time = 0;

    cin >> N >> M;

    vector<size_t> tempo(N);

    for (size_t i = 0; i < N; i++) {
        cin >> tempo[i];
    }

    for (auto it = tempo.begin(); it != tempo.end(); ++it) {
        yan_time += *it;

        if (yan_time > M) break;

        yan_count++;
    }
    
    for (auto it = tempo.rbegin(); it != tempo.rend(); ++it) {
        nathan_time += *it;
        
        if (nathan_time > M) break;
        
        nathan_count++;
    }

    if (yan_count > nathan_count) cout << "Yan";
    else if (yan_count < nathan_count) cout << "Nathan";
    else cout << "Empate";

    cout << endl;

    return EXIT_SUCCESS;
}
