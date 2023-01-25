#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int ctr = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == (ctr + 1)) {
			ctr++;
		}
	}
	cout << ((n - ctr) / k) + ((n - ctr) % k != 0) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

