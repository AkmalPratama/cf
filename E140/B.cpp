#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n-1];
	int x;
	cin >> x;
	for (int i = 0; i < n-1; i++) {
		cin >> a[i];
	}
	sort(a, a+n-1);
	for (int i = 0; i < n-1; i++) {
		if (x < a[i]) {
			x += (a[i] - x) & 1 ? ((a[i] - x + 1) / 2) : ((a[i] - x) / 2);
		}
	}
	cout << x << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

