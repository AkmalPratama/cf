#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, m, r, c;
		cin >> n >> m >> r >> c;
		bool board[n][m];
		bool isPossible = false;
		bool isRowExistBlack = false;
		bool isColExistBlack = false;
		char buf;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> buf;
				if (buf == 'B') {
					isPossible = true;
				}
				board[i][j] = (buf == 'W');
				if (i == (r-1) && buf == 'B') {
					isRowExistBlack = true;
				}
				if (j == (c-1) && buf == 'B') {
					isColExistBlack = true;
				}
			}
		}
		if (!isPossible) {
			cout << -1 << endl;
		} else {
			if (!board[r-1][c-1]) {
				cout << 0 << endl;
			} else if (isRowExistBlack || isColExistBlack) {
				cout << 1 << endl;
			} else {
				cout << 2 << endl;
			}
		}
	}
	return 0;
}
