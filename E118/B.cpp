#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	int mi = INT_MAX;
	for (int &x: a) {
		cin >> x;
		if (x < mi) {
			mi = x;
		}
	}
	int cnt = 0, id = 0;
	while (cnt < n / 2) {
		if (a[id] != mi) {
			cout << a[id] << ' ' << mi << endl;
			cnt++;
		}
		id++;
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
