#include <bits/stdc++.h>
using namespace std;

void solve() {
	int k, n;
	cin >> k >> n;
	int a[k];
	for (int i = 0; i < k; i++) {
		a[i] = n - k + i + 1;
	}
	a[0] = 1;
	for (int i = 1; i < k; i++) {;
		if (a[i] > (a[i-1] + i)) {
			a[i] = a[i-1] + i;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << a[i] << " ";
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
