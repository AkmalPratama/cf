#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	int a[n+1][m+1];
	for (int i = 1; i <= n/2; i++) {
		for (int j = 1; j <= m/2; j++) {
			if ((i+j) % 2 == 0) {
				a[2*i-1][2*j-1] = 1; a[2*i-1][2*j] = 0;
				a[2*i][2*j-1] = 0; a[2*i][2*j] = 1;
			} else {
				a[2*i-1][2*j-1] = 0; a[2*i-1][2*j] = 1;
				a[2*i][2*j-1] = 1; a[2*i][2*j] = 0;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
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

