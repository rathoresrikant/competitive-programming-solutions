#include <bits/stdc++.h>
using namespace std;

#define MAXR 1007
#define MAXC 1007

class QItem {
public:
	int row;
	int col;
 	int time;
 	QItem(int x, int y, int w)
        : row(x), col(y), time(w) {}
};

void go(int arr[][MAXC], int a, int b);
void calculate(int arr[][MAXC], bool arr2[][MAXC], int a, int b, int c, int d, int e);

void print_util(bool arr[MAXR][MAXC], int R, int C) {
	for (int i = 0 ; i < R ; i++) {
		for (int j = 0 ; j < C ; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void go(int grid[MAXR][MAXC], int R, int C) {
	bool laby[MAXR][MAXC];
	for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            laby[i][j] = false;
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (grid[i][j] > 0) {
            	int T = grid[i][j];
            	calculate(grid, laby, i, j, T, R, C);
            }
        }
    }
    //cout << "Laby\n";
    //print_util(laby, R, C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (laby[i][j] == true) {
            	cout << "Y";
            }
            else if (grid[i][j] == -1) {
            	cout << "B";
            }
            else cout << "N";
        }
        cout << endl;
    }
}

void calculate(int grid[MAXR][MAXC], bool laby[MAXR][MAXC], int source_x, int source_y, int time, int R, int C) {
	QItem source(0,0,0);
	bool visited[MAXR][MAXC];
	for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (grid[i][j] == -1) visited[i][j] = true;
            else visited[i][j] = false;
        }
    }
    //cout << "visited\n";
    //print_util(visited, R, C);
    source.row = source_x;
    source.col = source_y;
    source.time = time;

    queue <QItem> q;
    q.push(source);
    visited[source.row][source.col] = true;
    while (!q.empty()) {
    	QItem p = q.front();
    	q.pop();

    	if (p.time >= 0) {
    		//cout <<"prow = "<<p.row<<" pcol = "<<p.col<<" ptime = "<<p.time <<"\n";
    		laby[p.row][p.col] = true;

    	// moving up
        if (p.row - 1 >= 0 &&
            visited[p.row - 1][p.col] == false) {
            q.push(QItem(p.row - 1, p.col, p.time - 1));
            visited[p.row - 1][p.col] = true;
        }
 
        // moving down
        if (p.row + 1 < R &&
            visited[p.row + 1][p.col] == false) {
            q.push(QItem(p.row + 1, p.col, p.time - 1));
            visited[p.row + 1][p.col] = true;
        }
 
        // moving left
        if (p.col - 1 >= 0 &&
            visited[p.row][p.col - 1] == false) {
            q.push(QItem(p.row, p.col - 1, p.time - 1));
            visited[p.row][p.col - 1] = true;
        }
 
         // moving right
        if (p.col + 1 < C &&
            visited[p.row][p.col + 1] == false) {
            q.push(QItem(p.row, p.col + 1, p.time - 1));
            visited[p.row][p.col + 1] = true;
        }
    	}
    }
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		int arr[MAXR][MAXC];
		for (int i = 0 ; i < N ; i++) {
			for (int j = 0 ; j < M ; j++) {
				cin >> arr[i][j];
			}
		}
		go(arr, N, M);
	}
}