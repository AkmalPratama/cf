#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<ll> v(n+1, 0), a(n+1, 0);
	for (int i = n-k+1; i <= n; i++) {
		cin >> v[i];
	}
	if (k == 1) {
		cout << "YES\n";
		return;
	}
	for (int i = n-k+2; i <= n; i++) {
		a[i] = v[i] - v[i-1];
	}
	for (int i = n-k+2; i < n; i++) {
		if (a[i] > a[i+1]) {
			cout << "NO\n";
			return;
		}
	}
	if ((n-k+1) * a[n-k+2] < v[n-k+1]) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

