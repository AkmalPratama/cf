#include <bits/stdc++.h>
using namespace std;

bool isPerfectSqr(int n) {
	return ceil((double)sqrt(n)) == floor((double)sqrt(n));
}

long long sPerm(long long x) {
	return (x + x * x) / 2;
}

void solve() {
	long long m, s, curr = 0, max = 0;
	cin >> m >> s;
	long long ideal = sPerm(m);
	for (int i = 0; i < m; i++) {
		long long x;
		cin >> x;
		curr += x;
		if (x > max) {
			max = x;
		}
	}
	if ((curr + s) < sPerm(max)) {
		cout << "No\n";
		return;
	}
	if (isPerfectSqr(1 + 8 * (curr + s))) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
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

