#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == 1) {
		cout << "0\n";
		return;
	}
	cout << n - 1 << endl;
	cout << 1 << " " << n << endl;
	if (((a[n] + a[1]) % 2) == 1)  {
		a[n] = a[1];
	} else {
		a[1] = a[n];
	}
	for (int i = 2; i < n; i++) {
		if (((a[i] + a[1]) % 2) == 1) {
			cout << "1 " << i << endl;
		} else {
			cout << i << " " << n << endl;
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

