#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n == 3) {
		cout << -1 << endl;
		return;
	}
	int a[n];
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
	if (n % 2 == 1) {
		for (int i = 0; i < n; i++) {
			a[i] -= 2;
		}
		a[0] = n - 1;
		a[1] = n;
	} else {
		for (int i = 0; i < n; i += 2) {
			swap(a[i], a[i+1]);
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
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

