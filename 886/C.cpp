#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	char c[8][8];
	for (int i = 0; i < 8; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < 8; j++) {
			c[i][j] = s[j];
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (c[j][i] != '.') {
				cout << c[j][i];
			}
		}
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
