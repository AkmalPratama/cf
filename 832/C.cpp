#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int first = a[0];
	sort(a, a+n);
	if (a[0] == first) {
		cout << "Bob\n";
	} else {
		cout << "Alice\n";
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

