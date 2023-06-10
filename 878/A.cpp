#include <bits/stdc++.h>
#define ll long long
using namespace std;

int f(int x, int y) {
	return (y - x) * (y - x + 1) / 2;
}

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	char c = ' ';
	for (int i = 0; i < n; i++) {
		if (c == ' ') {
			cout << s[i];
			c = s[i];
		} else {
			if (c == s[i]) {
				c = ' ';
			}
		}
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

