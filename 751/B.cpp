#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int m[n+1][n+1];
	for (int i = 1; i <= n; i++) {
		cin >> m[0][i];
	}
	for (int i = 1; i <= n; i++) {
		int a[n+1];
		for (int j = 1; j <= n; j++) {
			a[j] = 0;
		}
		for (int j = 1; j <= n; j++) {
			a[m[i-1][j]]++;
		}
		for (int j = 1; j <= n; j++) {
			m[i][j] = a[m[i-1][j]];
		}
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int x, k;
		cin >> x >> k;
		cout << m[min(k, n)][x] << endl;
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
