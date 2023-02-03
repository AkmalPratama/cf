#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, m, d;
	cin >> n >> m >> d;
	int p[n+1], pos[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
		pos[p[i]] = i;
	}
	int a[m];
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
	}
	int ans = INT_MAX;
	for (int i = 1; i < m; i++) {
		if (pos[a[i]] >= pos[a[i+1]] || pos[a[i+1]] > pos[a[i]] + d) {
			cout << "0\n";
			return;
		}
		ans = min(ans, pos[a[i+1]] - pos[a[i]]);
		if (pos[a[i]] - 1 + n - pos[a[i+1]] >= pos[a[i]] + d - pos[a[i+1]] + 1) {
			ans = min(ans, pos[a[i]] + d - pos[a[i+1]] + 1);
		}
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

