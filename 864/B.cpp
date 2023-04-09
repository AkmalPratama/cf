#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int a[n][n];
	vector<vector<bool>> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = n-1; i >= 0; i--) {
		vector<int> v;
		for (int j = n-1; j >= 0; j--) {
			v.push_back(a[i][j]);
		}
		b.push_back(v);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] != b[i][j]) {
				cnt++;
			}
		}
	}
	if (n == 1) {
		cout << "YES\n";
		return;
	}
	if (k - (cnt / 2) < 0) {
		cout << "NO\n";
		return;
	}
	if ((k - (cnt / 2)) % 2) {
		if (n % 2) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	} else {
		cout << "YES\n";
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

