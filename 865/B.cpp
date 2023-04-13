#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int odd = 2 * n - 1;
	int eve = 2 * n;
	for (int i = 0; i < n / 2; i++) {
		cout << odd - (2 * i) << ' ' << 1 + (2 * i) << ' ';
	}
	cout << endl;
	for (int i = 0; i < n / 2; i++) {
		cout << 2 + (2 * i) << ' ' << n + (2 * (i + 1)) << ' ';
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

