#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int i = 0, ans = 0;
	int j = n - 1;
	while (i < j) {
		if (a[i] > a[j]) {
			ans++;
			i++;
			j--;
		} else if (a[i] == a[j]) {
			if (a[i] == 1) {
				j--;
			} else {
				i++;
			}
		} else {
			i++;
			j--;
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

