#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll f(ll n, ll k) {
	ll x = 1;
	ll mod = 1000000007;
	for (ll i = 0; i < k; i++) {
		x *= n;
		x %= mod;
	}
	return x;
}

void solve() {
	ll n, k;
	cin >> n >> k;
	string bin = bitset<32>(k).to_string();
	ll ans = 0;
	ll x = 1000000007;
	for (ll i = 0; i < 32; i++) {
		if (bin[i] == '1') {
			ans += f(n, 31-i);
			ans %= x;
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
