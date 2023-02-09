#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n == 2) {
		cout << "1 0\n";
		return;
	}
	int x = 1;
	while (x * 2 < n) {
		x *= 2;
	}
	for (int j = x-1; j >= 0; j--) {
		cout << j << " ";
	}
	for (int j = x; j < n; j++) {
		cout << j << " ";
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
