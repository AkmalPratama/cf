#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i += 2) {
		cout << i << ' ';
	}
	cout << 1;
	n = (n % 2) ? n : n - 1;
	for (int i = n; i >= 3; i -= 2) {
		cout << ' ' << i;
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

