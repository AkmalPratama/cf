#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int fi = -1, la;
	for (int i = 0; i < n-1; i++) {
		if (a[i] == a[i+1] && fi == -1) {
			fi = i;
		}
		if (a[i] == a[i+1]) {
			la = i;
		}
	}
	if (la - fi == 0 || fi == -1) {
		cout << "0\n";
		return;
	}
	if (la - fi == 1) {
		cout << "1\n";
		return;
	}
	cout << la - fi - 1 << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
