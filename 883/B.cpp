#include <bits/stdc++.h>
#define ll long long
using namespace std;
char c[3][3];

bool isWinV(char x, int col) {
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		if (c[i][col] == x) {
			cnt++;
		}
	}
	return (cnt == 3);
}

bool isWinH(char x, int row) {
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		if (c[row][i] == x) {
			cnt++;
		}
	}
	return (cnt == 3);
}

bool isWinDa(char x) {
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		if (c[i][i] == x) {
			cnt++;
		}
	}
	return (cnt == 3);
}

bool isWinDb(char x) {
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		if (c[2-i][i] == x) {
			cnt++;
		}
	}
	return (cnt == 3);
}

void solve() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = '.';
		}
	}
	string aa, bb, cc;
	cin >> aa >> bb >> cc;
	for (int i = 0; i < 3; i++) {
		c[0][i] = aa[i];
	}
	for (int i = 0; i < 3; i++) {
		c[1][i] = bb[i];
	}
	for (int i = 0; i < 3; i++) {
		c[2][i] = cc[i];
	}
	for (int i = 0; i < 3; i++) {
		if (isWinH('O', i)) {
			cout << "O\n";
			return;
		}
		if (isWinH('X', i)) {
			cout << "X\n";
			return;
		}
		if (isWinH('+', i)) {
			cout << "+\n";
			return;
		}
		
		if (isWinV('O', i)) {
			cout << "O\n";
			return;
		}
		if (isWinV('X', i)) {
			cout << "X\n";
			return;
		}
		if (isWinV('+', i)) {
			cout << "+\n";
			return;
		}
	}
	if (isWinDa('X') || isWinDb('X')) {
		cout << "X\n";
		return;
	}
	if (isWinDa('O') || isWinDb('O')) {
		cout << "O\n";
		return;
	}
	if (isWinDa('+') || isWinDb('+')) {
		cout << "+\n";
		return;
	}
	cout << "DRAW\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

