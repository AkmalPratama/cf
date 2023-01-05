#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	ll cost[n+1];
	bool b[n+1];
	for (int i = 1; i <= n; i++) {
		cost[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			b[i+1] = true;
		} else {
			b[i+1] = false;
		}
	}
	for (ll i = 1; i <= n; i++) {
		for (ll j = i; j <= n; j += i) {
			if (!b[j]) {
				if (cost[j] == 0 && !b[j]) {
					cost[j] = i;
				}
			} else {
				break;
			}
		}
	}
	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += cost[i];
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

