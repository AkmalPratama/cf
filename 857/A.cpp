#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	int cntNeg = 0;
	for (int &x: a) {
		cin >> x;
		if (x < 0) {
			cntNeg++;
		}
	}
	int x = 0;
	for (int i = 1; i <= n - cntNeg; i++) {
		x++;
		cout << x << " ";
	}
	for (int i = n - cntNeg; i < n; i++) {
		x--;
		cout << x << " ";
	}
	cout << endl;
	for (int i = 1; i <= cntNeg; i++) {
		cout << "1 0 ";
	}
	for (int i = 1; i <= n - 2 * cntNeg; i++) {
		cout << i << " ";
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

