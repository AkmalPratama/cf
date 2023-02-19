#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	sort(a, a+n);
	int cnt = 0;
	for (int i = 0; i < n-1; i++) {
		cnt += (a[i+1] - a[i]) / 120;
	}
	cnt += a[0] / 120;
	cnt += (1440 - a[n-1]) / 120;
	if (cnt >= 2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
