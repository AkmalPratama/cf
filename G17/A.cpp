#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	if (m == 1 && n == 1) {
		cout << "0\n";
		return;
	}
	if (m == 1 || n == 1) {
		cout << "1\n";
		return;
	}
	cout << "2\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

