#include <bits/stdc++.h>
using namespace std;

int nextPow2(int x) {
	int n = 1;
	while (x >= n) {
		n *= 2;
	}
	return n;
}

void solve() {
	int n;
	cin >> n;
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cout << i+1 << " " << nextPow2(x) - x << endl;
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

