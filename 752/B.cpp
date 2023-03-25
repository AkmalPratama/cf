#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	if (n % 2 == 0) {
		cout << "YES\n";
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		if (a[i] >= a[i + 1]) {
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
