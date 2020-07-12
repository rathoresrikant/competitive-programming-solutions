#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string table;
    int steps;
} STEP;

void run(string table);
void tryMove(int from, int to, STEP step, unordered_set<string> &visited, queue<STEP> &toVisit);

unordered_set<int> primes = { 2, 3, 5, 7, 11, 13, 17 };
 
int main(void) {
    ios::sync_with_stdio(false);

    int N;

    cin >> N;
    
    while (N-- > 0) {
        stringstream ss;

        for (int i = 0; i < 8; i++) {
            char c;
            cin >> c >> ws;
            ss << c;
        }

        run(ss.str());
    }

    return EXIT_SUCCESS;
}

void run(string table) {
    unordered_set<string> visited;
    queue<STEP> toVisit;

    STEP firstStep = { table, 0 };

    toVisit.push(firstStep);

    while (!toVisit.empty()) {
        STEP step = toVisit.front();
        toVisit.pop();

        if (visited.find(step.table) == visited.end()) {
            visited.insert(step.table);
        }
        else {
            continue;
        }

        if (step.table == "12345678") {
            cout << step.steps << endl;
            return;
        }
        else {
            tryMove(0, 1, step, visited, toVisit);
            tryMove(1, 2, step, visited, toVisit);
            tryMove(3, 4, step, visited, toVisit);
            tryMove(4, 5, step, visited, toVisit);
            tryMove(6, 7, step, visited, toVisit);
            tryMove(7, 8, step, visited, toVisit);
            tryMove(0, 3, step, visited, toVisit);
            tryMove(3, 6, step, visited, toVisit);
            tryMove(1, 4, step, visited, toVisit);
            tryMove(4, 7, step, visited, toVisit);
            tryMove(2, 5, step, visited, toVisit);
            tryMove(5, 8, step, visited, toVisit);
        }
    }

    cout << -1 << endl;
}

void tryMove(int from, int to, STEP step, unordered_set<string> &visited, queue<STEP> &toVisit) {
    int intFrom = step.table[from] - '0';
    int intTo = step.table[to] - '0';

    int sum = intFrom + intTo;



    if (primes.find(sum) != primes.end()) {
        STEP nextStep = { string(step.table), step.steps + 1 };

        char aux = nextStep.table[from];
        nextStep.table[from] = nextStep.table[to];
        nextStep.table[to] = aux;

        if (visited.find(nextStep.table) == visited.end()) {
            toVisit.push(nextStep);
        }
    }
}
