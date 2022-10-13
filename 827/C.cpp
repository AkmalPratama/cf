#include <bits/stdc++.h>
using namespace std;

char solve() {
	char m[8][8];

	for (int i = 0; i < 8; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < 8; j++) {
			m[i][j] = s[j];
		}
	}
	for (int i = 0; i < 8; i++) {
		int r = 0;
		for (int j = 0; j < 8; j++) {
			if (m[i][j] == 'R') {
				r++;
			}
		}
		if (r == 8) {
			return 'R';
		}
	}
	return 'B';
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << endl;
	}
	return 0;
}

