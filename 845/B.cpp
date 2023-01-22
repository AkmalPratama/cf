#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll x = 1e9+7;

ll fact(ll a) {
	ll ret = 1;
	if (a == 0) {
		return ret;
	}
	for (ll i = 1; i <= a; i++) {
		ret = (ret * i) % x;	
	}
	return ret;
}

void solve() {
	ll n;
	cin >> n;
	ll m = (n * (n-1)) % x;
	cout << (m * fact(n)) % x << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

