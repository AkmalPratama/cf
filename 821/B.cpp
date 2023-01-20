#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, x, y;
	cin >> n >> x >> y;
	if (min(x, y) != 0) {
		cout << -1 << endl;
		return;
	}
	if (max(x, y) == 0) {
		cout << -1 << endl;
		return;
	}
	if ((n - 1) % max(x, y) != 0) {
		cout << -1 << endl;
		return;
	}
	int win = max(x, y);
	int ctr = 0;
	int winner = 1;
	for (ll i = 1; i < n; i++) {
		if (ctr < win) {
			cout << winner << " ";
			ctr++;
		}
		if (ctr == win){
			ctr = 0;
			winner = i + 2;
		}
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

