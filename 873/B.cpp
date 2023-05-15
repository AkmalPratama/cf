#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n+1];
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ans = __gcd(ans, abs(a[i] - i));
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

