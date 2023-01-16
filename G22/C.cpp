#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int odd = 0, eve = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x % 2 == 0) {
			eve++;
		} else {
			odd++;
		}
	}
	if (odd % 4 == 2) {
		cout << "Bob\n";
		return;
	}
	if (odd % 4 == 3) {
		cout << "Alice\n";
		return;
	}
	if (odd % 4 == 0) {
		cout << "Alice\n";
		return;
	}
	if (eve % 2 == 1) {
		cout << "Alice\n";
		return;
	}
	cout << "Bob\n";
	return;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

