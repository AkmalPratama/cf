#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	if ((a + b) % 2) {
		cout << "-1 -1\n";
		return;
	}
	if (a % 2) {
		if (a > b) {
			cout << ((a + b) / 2) - b << ' ' << b << endl;
		} else {
			cout << a << ' ' << ((a + b) / 2) - a << endl;
		}
		return;
	}
	cout << a / 2 << ' ' << b / 2 << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
