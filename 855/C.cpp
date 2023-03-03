#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll ans = 0;
	priority_queue<ll> p;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		if (x) {
			p.push(x);
		} else {
			if (p.size()) {
				ans += p.top();
				p.pop();
			}
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

