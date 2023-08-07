#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		sum += x;
	}
	if (sum % 2) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
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

