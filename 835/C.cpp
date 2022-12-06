#include <bits/stdc++.h>
using namespace std;

int solve() {
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a+n);
	int max = a[n-1];
	int max2 = a[n-2];
	
	for (int i = 0; i < n; i++) {
		if (b[i] == max) {
			cout << b[i] - max2 << " ";
		} else {
			cout << b[i] - max << " ";
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

