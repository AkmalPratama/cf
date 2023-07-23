#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, m, ans = 0;
	cin >> n >> m;
	ll a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		vector<int> v;
		for (int j = 0; j < n; j++) {
			v.push_back(a[j][i]);
		}
		sort(v.begin(), v.end());
		for (int j = 0; j < n; j++) {
			ans += v[j] * (1 + 2 * j - n);
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

