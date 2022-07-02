#include <iostream>
#include <string>
using namespace std;

void printBoard(int n, int k) {
	int r = k;
	char board[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			board[i][j] = '.';
		}
	}
	int rPos = 0;
	while (r--) {
		board[rPos][rPos] = 'R';
		rPos += 2;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		if (k > ((n+1) / 2)) {
			cout << -1 << endl;
		} else {
			printBoard(n, k);
		}
	}
	return 0;
}

