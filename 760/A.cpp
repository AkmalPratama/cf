#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a[7];
	for (int i = 0; i < 7; i++) {
		cin >> a[i];
	}
	cout << a[0] << ' ';
	for (int i = 1; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			if (a[i] + a[j] == a[5]) {
				cout << a[i] << ' ' << a[j] << endl;
				return;
			}
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
