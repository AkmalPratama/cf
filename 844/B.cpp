#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	sort(a, a+n);
	int ans = 1;
	if (a[0] > 0) {
		ans++;
	}
	for (int i = 1; i < n; i++) {
		if (a[i-1] < i && a[i] > i) {
			ans++;
		}
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

