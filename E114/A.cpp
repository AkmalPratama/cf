#include <bits/stdc++.h>
using namespace std;

void printP(int n) {
	if (n > 0) {
		cout << '(';
		printP(n - 1);
		cout << ')';
	}
}

void printPx(int n) {
	for (int i = 0; i < n; i++) {
		printP(1);
	}
}

void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		printP(i);
		printPx(n-i);
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
