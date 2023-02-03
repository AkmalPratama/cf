#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for (int &x: a) {
		cin >> x;
		sum += x;
	}
	if (sum == n) {
		cout << sum - 4 << endl;
		return;
	}
	bool found = false;
	for (int i = 0; i < n-1 && !found; i++) {
		if (a[i] + a[i+1] == -2) {
			found = true;
		}
	}
	if (found) {
		cout << sum + 4 << endl;
		return;
	}
	cout << sum << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

