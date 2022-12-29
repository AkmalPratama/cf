#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	int min = 1e7+1
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < min) {
			min = a[i];
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i] - min;
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

