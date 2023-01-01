#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n], t[n], at[2*n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	for (int i = 0; i < n; i++) {
		at[2*i] = a[i] - t[i];
		at[2*i+1] = a[i] + t[i];
	}
	int mi = at[0];
	int ma = at[0];
	for (int i = 0; i < 2*n; i++) {
		if (at[i] < mi) {
			mi = at[i];
		}
		if (at[i] > ma) {
			ma = at[i];
		}
	}
	if ((ma + mi) % 2 == 0) {
		cout << (ma + mi) / 2 << endl;
	} else {
		cout << (ma + mi) / 2 << ".5" << endl;
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

