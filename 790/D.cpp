#include <bits/stdc++.h>
#define ll long long
using namespace std;

int diff(string& s1, string& s2) {
	int sum = 0;
	for (int i = 0; i < s1.length(); i++) {
		sum += abs(s1[i] - s2[i]);
	}
	return sum;
}

void solve() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	int maxi = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int sum = 0;
			int x, y;
			x = i;
			y = j;
			while (x < n && y < m && x >= 0 && y >= 0) {
				x--;
				y--;
				if (x < n && y < m && x >= 0 && y >= 0) {
					sum += a[x][y];
				}
			}
			x = i;
			y = j;
			while (x < n && y < m && x >= 0 && y >= 0) {
				x--;
				y++;
				if (x < n && y < m && x >= 0 && y >= 0) {
					sum += a[x][y];
				}
			}
			x = i;
			y = j;
			while (x < n && y < m && x >= 0 && y >= 0) {
				x++;
				y--;
				if (x < n && y < m && x >= 0 && y >= 0) {
					sum += a[x][y];
				}
			}
			x = i;
			y = j;
			while (x < n && y < m && x >= 0 && y >= 0) {
				x++;
				y++;
				if (x < n && y < m && x >= 0 && y >= 0) {
					sum += a[x][y];
				}
			}
			sum += a[i][j];
			maxi = max(maxi, sum);
		}
	}
	cout << maxi << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

