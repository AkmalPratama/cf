#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int i2 = 11, i3 = 111;
	while (n >= 0) {
		if (n % i2 == 0) {
			n %= i2;
			cout << "YES\n";
			return;
		}
		n -= i3;
	}
	cout << "NO\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

