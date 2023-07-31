#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, cnt = 0;
	cin >> n;
	int a[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] == i) {
			cnt++;
		}
	}
	int ans = cnt / 2;
	if (cnt % 2) {
		ans++;
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

