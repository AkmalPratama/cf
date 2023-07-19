#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[2*n];
	for (int &x: a) {
		cin >> x;
	}
	sort(a, a+2*n);
	int b[2*n];
	for (int i = 0; i < n; i++) {
		b[i * 2] = a[i];
	}
	for (int i = n; i < 2*n; i++) {
		b[((i-n) * 2) + 1] = a[i];
	}
	for (int i = 0; i < 2*n; i++) {
		cout << b[i] << ' ';
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
