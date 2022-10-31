#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k, r, c;
	cin >> n >> k >> r >> c;
	char m[n+1][n+1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			m[i][j] = '.';
			if (((i + j) % k) == ((r + c) % k)) {
				m[i][j] = 'X';
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << m[i][j];
		}
		cout << endl;
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

