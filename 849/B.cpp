#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int x, y;
	x = 0;
	y = 0;
	for (char c: s) {
		if (c == 'U') {
			y++;
		} else if (c == 'D') {
			y--;
		} else if (c == 'L') {
			x--;
		} else {
			x++;
		}
		if (x == 1 && y == 1) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

