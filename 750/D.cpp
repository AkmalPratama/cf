#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	if (n % 2) {
		if (a[0] + a[1]) {
			cout << a[2] << " " << a[2] << " " << -(a[0] + a[1]) << " ";
		} else if (a[1] + a[2]) {
			cout << -(a[1] + a[2]) << " " << a[0] << " " << a[0] << " ";
		} else {
			cout << a[1] << " " << -(a[0] + a[2]) << " " << a[1] << " ";
		}
		for (int i = 3; i < n; i += 2) {
			cout << a[i+1] << " " << -a[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = 0; i < n; i += 2) {
		cout << a[i+1] << " " << -a[i] << " ";
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
