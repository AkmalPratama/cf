#include <bits/stdc++.h>
#define ll long long
using namespace std;

int majority(int a, int b, int c) {
	if (a == b) {
		return a;
	}
	return c;
}

void solve() {
	int n;
	cin >> n;
	int a[n][n-1];
	int b[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			cin >> a[i][j];
		}
	}
	b[0] = majority(a[0][0], a[1][0], a[2][0]);
	cout << b[0];
	for (int i = 0; i < n-1; i++) {
		bool stop = false;
		for (int j = 0; j < n && !stop; j++) {
			if (a[j][i] != b[i]) {
				b[i+1] = a[j][i];
				cout << " " << b[i+1];
				stop = true;
			}
		}
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

