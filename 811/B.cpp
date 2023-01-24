#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	set<int> s;
	int ans = 0;
	for (int i = n-1; i >= 0; i--) {
		if (s.count(a[i])) {
			ans = i+1;
			break;
		} else {
			s.insert(a[i]);
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

