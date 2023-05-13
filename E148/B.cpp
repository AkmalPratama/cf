#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<ll> a(n+1);
	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	ll ans = 0, sum = 0;
	for (int i = 1; i <= n ; i++) {
		sum += a[i];
		if (i == n - k) {
			ans = sum;
		}
		if (i > n - k) {
			sum -= a[2 * (i - (n - k))] + a[2 * (i - (n - k)) - 1];
			ans = max(ans, sum);
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

