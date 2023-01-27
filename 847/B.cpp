#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, s, r;
	cin >> n >> s >> r;
	int a[n];
	for (int i = 0; i < n; i++) {
		a[i] = 1;
	}
	a[0] = s - r;
	r -= n - 1;
	cout << a[0];
	for (int i = 1; i < n; i++) {
		a[i] += min(r, a[0] - 1);
		r -= min(r, a[0] - 1);
		cout << " " << a[i];
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

