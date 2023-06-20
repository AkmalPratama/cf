#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll x;
	bool b = false;
	ll sum = 0, op = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x < 0 && !b) {
			op++;
			b = true;
		} else if (x > 0 && b) {
			b = false;
		}
		sum += abs(x);
	}
	cout << sum << ' ' << op << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

