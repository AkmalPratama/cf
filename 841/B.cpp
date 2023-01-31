#include <bits/stdc++.h>
#define ll long long
const int n1=1e9+7;
using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll m = 1e9+7;
	ll ans;
	ans = n * (n+1) % m;
	ans = ans * (4 * n - 1) % m;
	ans = ans * 337 % m;
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

