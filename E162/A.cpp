#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	bool b = false;
	int left = -1;
	int right = n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 1 && !b) {
			b = true;
			left = i;
		}
	}
	for (int i = n-1; i >= 0; i--) {
		if (a[i] == 1 && b) {
			b = false;
			right = i;
		}
	}
	int ans = 0;
	for (int i = left; i <= right; i++) {
		if (a[i] == 0) {
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

