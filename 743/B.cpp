#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[2*n];
	int b[2*n];
	int map<int,int> m;
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a[x] = i;
	}
	for (int i = 0; i < n; i++) {
		cin >> x;
		b[x] = i;
	}
	int l = n, ans = n;
	int k = 2 * n;
	while(k) {
		if (k % 2) {
			ans = min(ans, a[k] + l);
		} else {
			l = min(l, b[k]);
		}
		k--;
	}
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
