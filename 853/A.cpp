#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int& x: a) {
		cin >> x;
	}
	bool b = false;
	for (int i = 0; i < n-1 && !b; i++) {
		for (int j = i+1; j < n && !b; j++) {
			if (__gcd(a[i], a[j]) <= 2) {
				b = true;
			}
		}
	}
	cout << (b ? "YES\n": "NO\n");
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

