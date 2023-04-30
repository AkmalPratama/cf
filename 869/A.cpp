#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	char m[n+1][k+1];
	bool exp[n+1];
	fill(exp, exp + n + 1, false);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			cin >> m[i][j];
		}
	}
	int ans = 0;
	for (int i = 1; i <= k; i++) {
		int current = 0;
		for (int j = 1; j <= n; j++) {
			if (m[j][i] != m[1][i]) {
				exp[j] = true;
			}
			if (m[j][i] == m[1][i] && !exp[j]) {
				current++;
			}
		}
		ans = current;
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

