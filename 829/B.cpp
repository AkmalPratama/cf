#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	if (n % 2 == 0) {
		for (int i = 1; i <= n/2; i++) {
			cout << n/2 + i << " " << i << " ";
		}
		cout << endl;
	} else {
		for (int i = 1; i <= n/2; i++) {
			cout << i << " " << i + n/2 + 1 << " ";
		}
		cout << n/2 + 1 << endl;
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

