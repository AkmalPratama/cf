#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int str = a[0], ans = 1;
	for (int i = 0; i < n; i++) {
		str &= a[i];
		if (str == 0 && i != n-1) {
			ans++;
			str = a[i+1];
		}
	}
	if (str != 0 && ans != 1) {
		ans--;
	}
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

