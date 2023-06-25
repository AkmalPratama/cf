#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	ll a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		a += x;
	}
	for (int i = 0; i < m; i++) {
		ll x;
		cin >> x;
		b += x;
	}
	if (a < b) {
		cout << "Tenzing\n";
	} else if (a == b) {
		cout << "Draw\n";
	} else {
		cout << "Tsondu\n";
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
