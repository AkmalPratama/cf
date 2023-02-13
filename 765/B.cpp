#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int ans = INT_MIN;
	map<int,int> m;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		if (m[x]) {
			ans = max(ans, n - (i - m[x]));
		}
		m[x] = i;
	}
	if (ans == INT_MIN) {
		cout << "-1\n";
		return;
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
