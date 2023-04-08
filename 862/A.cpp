#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	int ans = 0;
	for (int &x: a) {
		cin >> x;
		ans ^= x;
	}
	if (ans == 0) {
		cout << "0" << endl;
	} else {
		if (n % 2) {
			cout << ans << endl;
		} else {
			cout << "-1" << endl;
		}
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

