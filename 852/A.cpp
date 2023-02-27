#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, m;
	ll a, b;
	cin >> a >> b;
	cin >> n >> m;
	ll ans = b * n;
	ans = min(ans, a * (n / (m + 1ll)) * m + a * (n % (m + 1ll)));
	ans = min(ans, a * (n / (m + 1ll)) * m + b * (n % (m + 1ll)));
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

