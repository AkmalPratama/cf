#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int x, k;
	cin >> x >> k;
	if ((x % k) == 0) {
		cout << "2\n";
		cout << x+1 << ' ' << -1 << endl;
	} else {
		cout << "1\n";
		cout << x << endl;
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

