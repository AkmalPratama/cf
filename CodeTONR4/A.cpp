#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n+1];
	bool b = false;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (i >= a[i]) {
			b = true;
		}
	}
	if (b) {
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
