#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, k, ans = 1;
	cin >> n >> k;
	for (ll i = 0; i < k; i++) {
		ans = (ans * n) % 1000000007;
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

