#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a[n], sum = 0;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		sum += x;
	}
	if (floor(sqrtl(sum)) == ceil(sqrtl(sum))) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

