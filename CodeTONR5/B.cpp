#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	int a[n], b[n], c[n];
	int know = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	for (int i = 0; i < n; i++) {
		if ((x | a[i]) != x) {
			break;
		}
		know |= a[i];
	}
	for (int i = 0; i < n; i++) {
		if ((x | b[i]) != x) {
			break;
		}
		know |= b[i];
	}
	for (int i = 0; i < n; i++) {
		if ((x | c[i]) != x) {
			break;
		}
		know |= c[i];
	}
	if (know == x) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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
