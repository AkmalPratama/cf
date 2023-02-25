#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int& x: a) {
		cin >> x;
	}
	bool ans = true;
	sort(a, a+n, greater<int>());
	vector<bool> b(n+1, false);
	for (int i = 0; i < n; i++) {
		while(a[i] > n || b[a[i]]) {
			a[i] /= 2;
		}
		if (a[i] == 0) {
			ans = false;
			break;
		} else {
			b[a[i]] = true;
		}
	}
	if (ans) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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
