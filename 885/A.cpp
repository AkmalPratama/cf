#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	int a, b;
	cin >> a >> b;
	int x = a + b;
	bool ans = true;
	for (int i = 0; i < k; i++) {
		int c, d;
		cin >> c >> d;
		if ((x % 2) == ((c + d) % 2)) {
			ans = false;
		}
	}
	if (ans) {
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

