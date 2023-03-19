#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (b > d) {
		cout << "-1\n";
		return;
	}
	if (c > a) {
		if (b + c - a > d) {
			cout << "-1\n";
			return;
		}
	}
	cout << 2 * (d - b) + a - c << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

