#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, cnt = 1;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			int x = 0;
			for (int k = 0; k < n; k++) {
				if (k == i || k == j || (a[k] - a[i]) * (k - j) == (a[k] - a[j]) * (k - i)) {
					x++;
				}
				cnt = max(cnt, x);
			}
		}
	}
	cout << n - cnt << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
