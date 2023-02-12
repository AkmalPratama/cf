#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	
	bool m[n+1][n+1];
	int l[n], r[n];
	for (int i = 0; i < n; i++) {
		l[i] = 0;
		r[i] = 0;
	}
	
	for (int i = 0; i < n+1; i++) {
		for (int j = 0; j < n+1; j++) {
			m[i][j] = false;
		}
	}
	
	for (int i = 0; i < n; i++) {
		cin >> l[i] >> r[i];
		m[l[i]][r[i]] = true;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = l[i]; j <= r[i]; j++) {
			if (((j == l[i]) || m[l[i]][j-1]) && (m[j+1][r[i]] || (j == r[i]))) {
				cout << l[i] << " " << r[i] << " " << j << endl;
				break;
			}
		}
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
